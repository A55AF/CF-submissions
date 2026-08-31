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
int n , k , x , y ;
set<int> nd;
vector<vector<int>> gr;
vector<int> cost,vis;
void reset() {
    cost.clear();
    cost.resize(n+1,inf);
    vis.clear();
    vis.resize(n+1);
    gr.clear();
    gr.resize(n+1);
}
int dfs(int node = x ) {
    vis[node] = 1;
    for ( const int&ch : gr[node] ) {
        if (!vis[ch]) {
            vis[ch] = 1 ;
            cost[node] = min(cost[node],dfs(ch));
        }
    }
    return cost[node] ;
}
void accepted() {
    cin >> n >> k >> x >> y ;
    reset();
    for ( int i = 0 ; i < k ; i++ ) {
        int inp;
        cin >> inp;
        nd.insert(inp);
        cost[inp] = 2;
    }
    cost[y] = 1;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        int u , v ;
        cin >> u >> v ;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs();
    int ans = -1 ;
    for ( int i = 1 ; i <= n ; i++ ) {
        if ( cost[i] == inf ) cost[i] = 0;
        ans += cost[i] ;
    }
    cout << ans << '\n' ;
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
        accepted();
}
