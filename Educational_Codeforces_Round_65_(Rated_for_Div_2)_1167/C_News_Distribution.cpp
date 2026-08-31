#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
int n , m , z = 0 , res = 0;
vector<int> vis , ans;
vector<vector<int>> v,gr;
void reset() {
    vis.clear();
    v.clear();
    gr.clear();
    ans.clear();
    vis.resize(n+1);
    v.resize(m+1);
    gr.resize(n+1);
    ans.push_back(0);
}
void dfs(int node , int t = z) {
    vis[node] = t;
    for ( const int&ch : gr[node] ) {
        if (!vis[ch]) dfs(ch,z) , vis[ch] = t , res++;
    }
}
void accepted() {
    cin >> n >> m ;
    reset();
    for( int i = 0 ; i < m ; i++ ){
        int x ;
        cin >> x ;
        for( int j = 0 ; j < x ; j++ ) {
            int inp;
            cin >> inp;
            v[i].push_back(inp);
        }
    }
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < SZ(v[i]) - 1 ; j++ ) {
            gr[v[i][j]].push_back(v[i][j+1]);
            gr[v[i][j+1]].push_back(v[i][j]);
        }
    }
    for ( int i = 1 ; i <= n ; i++ ) {
        res = 0;
        if (!vis[i]) {
            z++;
            dfs(i);
            ans.push_back(res+1);
        }
        cout << ans[vis[i]] << ' ';
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}