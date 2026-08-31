#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e9
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 1e3 + 7;
int n, m;
bool cycle = false;
int vis[N], par[N];
vector<int> gr[N];
vector<int> cost(N,inf);
int ans = inf, last = -1;

void dfs(int node) {
    vis[node] = 1;
    int children = 0;
    for (const auto &ch: gr[node]) {
        if (!vis[ch]) {
            ans = min(cost[ch], ans);
            last = ch;
            vis[ch] = 1;
            dfs(ch);
            children++;
        } else if (vis[ch] == 1) {
            cycle = true;
        }
    }
    if ( !children ) last = node ;
    vis[node] = 2;
}

void accepted() {
    cin >> n >> m;
    set<int> s;
    for (int i = 0; i < m; i++) {
        int x, y, d;
        cin >> x >> y >> d;
        s.insert(x);
        s.insert(y);
        gr[x].push_back(y);
        par[y] = x;
        cost[x] = min(cost[x], d);
        cost[y] = min(cost[y], d);
    }
    vector<tuple<int, int, int> > res;
    for (const auto &i: s) {
        ans = inf;
        last = -1;
        if (!par[i] && !vis[i]) {
            dfs(i);
            res.push_back({i, last, ans});
        }
    }
    if (cycle) return void(cout << "0");
    cout << SZ(res) << '\n';
    for (const auto &[a,b,d]: res) {
        cout << a << ' ' << b << ' ' << d << '\n';
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--)
        accepted();
}
