#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define print(x,z) int y = 0; for ( auto i : x ) \
     {if (y == z) break; cout << i << ' ' , y++;} cout << '\n';
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
const int N = 4e3+7;
int n , arr[N] ;
bool par[N];
bool vis[N];
string s;
vector<int> gr[N] ;
int ans;
void reset() {
    for ( int i = 0 ; i <= n ; i++ ) {
        gr[i].clear();
        par[arr[i]] = false;
        vis[i] = false;
        arr[i] = 0;
    }
    ans = 0;
}
int solve(int node = 1) {
    int col = 0 ;
    vis[node] = 1;
    for ( const int&ch : gr[node] ) {
        if ( !vis[ch] ) col += solve(ch);
    }
    col += (s[node-1] == 'W' ) ? 1 : -1 ;
    if ( par[node] && !col ) ans++;
    return col;
}
void accepted() {
    reset();
    cin >> n ;
    for ( int i = 2 ; i <= n ; i++ ) cin >> arr[i] , par[arr[i]] = true;
    cin >> s ;
    for ( int i = 2 ; i <= n; i++ ) {
        gr[i].push_back(arr[i]);
        gr[arr[i]].push_back(i);
    }
    solve();
    cout << ans << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}