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
int cnt = 0 ;
bool cycle = false ;
void dfs(int node , vector<int> gr[], int vis[] ) {
    vis[node] = 1 ;
    for ( const int&ch : gr[node] ) {
        if ( !vis[ch] ) vis[ch] = 1 , dfs(ch,gr,vis);
        if ( vis[ch] == 1 ) cycle = 1;
    }
    vis[node] = 2 ;
    cnt++;
}
void accepted() {
    cnt = 0 , cycle = 0 ;
    int n ;
    cin >> n ;
    vector<int> gr[n+1] ;
    int vis[n+1]{};
    bool flag = true;
    for ( int i = 0 ; i < n ; i++ ) {
        int x , y ;
        cin >> x >> y ;
        gr[x].push_back(y);
        gr[y].push_back(x);
        if ( x == y || SZ(gr[x]) > 2 || SZ(gr[y]) > 2 ) flag = false;
    }
    for ( int i = 1 ; i <= n ; i++ ) {
        cycle = 0 , cnt = 0 ;
        if ( !vis[i] ) dfs(i,gr,vis);
        if ( cnt&1 && cycle ) flag = false;
    }
    cout << (flag?"YES\n":"NO\n");
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
        accepted();
}
