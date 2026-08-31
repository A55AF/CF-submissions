#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 2e5+7;
vector<int> par(N), sz(N);
stack<tuple<int,int,int,int,int>> undo;
int ans;
int root(int x) {
    return x == par[x] ? x : root(par[x]);
}
bool connected(int x, int y) {
    return root(x) == root(y);
}
void connect(int x, int y) {
    x = root(x);
    y = root(y);
    if ( connected(x, y) ) {
        undo.push({-1,-1,-1,-1,-1});
        return;
    }
    if ( sz[x] > sz[y] )
        swap(x, y);
    undo.push({x, par[x], y, sz[y], ans});
    par[x] = y;
    sz[y] += sz[x];
    ans--;
}
void single_rollback() {
    auto [x, par_x, y, sz_y, answer] = undo.top();
    undo.pop();
    if ( x == -1 ) return;
    par[x] = par_x;
    sz[y] = sz_y;
    ans = answer;
}
void persist() {
    undo.push({-2,-2,-2,-2,-2});
}
void rollback() {
    while (!undo.empty() && get<0>(undo.top()) != -2) {
        single_rollback();
    }
    if (!undo.empty()) undo.pop();
}
void accepted() {
    int n, m;
    cin >> n >> m;
    ans = n;
    for ( int i = 0 ; i <= n ; i++ )
        par[i] = i, sz[i] = 1;
    while (m--) {
        string op; cin >> op;
        if (op == "union") {
            int x, y;
            cin >> x >> y;
            connect(x,y);
            cout << ans << '\n';
        }else if ( op == "persist") {
            persist();
        }else {
            rollback();
            cout << ans << '\n';
        }
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}