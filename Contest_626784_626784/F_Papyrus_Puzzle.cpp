#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define infl (long long)1e18
typedef long long ll;
using namespace std;
// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 2e5 + 7;
vector<ll> v(N), ans(N, infl);
vector<multiset<ll>> cur(N);
vector<ll> gr[N];
void dfs(ll node = 1, ll par = -1) {
    cur[node].insert(v[node]);
    for(const auto&ch : gr[node]) {
        if(ch == par) continue;
        dfs(ch, node);
        ans[node] = min(ans[node], ans[ch]);
    }

    if(par == -1) return;

    if(cur[node].size() > cur[par].size()) {
        swap(cur[node], cur[par]);
    }
    for(const auto&i : cur[node]) {
        cur[par].insert(i);

        auto it = cur[par].find(i);
        if(next(it) != cur[par].end()) {
            ans[par] = min(ans[par], abs(i - *next(it)));
        }
        if(it != cur[par].begin()) {
            ans[par] = min(ans[par], abs(i - *prev(it)));
        }
    }
}
void accepted() {
    ll n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n-1; i++) {
        ll x, y;
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }

    dfs();

    ll q;
    cin >> q;
    while(q--) {
        ll node;
        cin >> node;
        if(ans[node] == infl) ans[node] = -1;
        cout << ans[node] << '\n';
    }
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
