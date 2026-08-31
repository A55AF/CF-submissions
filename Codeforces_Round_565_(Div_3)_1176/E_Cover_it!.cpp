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
void accepted() {
    int n , m;
    cin >> n >> m ;
    vector<int> gr[n+1] , lvl(n+1) , ans1 , ans2;
    vector<bool> vis(n+1);
    for( int i = 0 ; i < m ; i++ ) {
        int x , y ;
        cin >> x >> y ;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    int half = 0;
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    lvl[1] = 1;
    while ( q.size()){
        int node = q.front();
        q.pop();
        if ( lvl[node]&1 ) half++ , ans1.push_back(node);
        else ans2.push_back(node);
        for( const int&ch : gr[node] ){
            if (!vis[ch]){
                q.push(ch) ;
                lvl[ch] = lvl[node] + 1 ;
                vis[ch] = 1 ;
            }
        }
    }
    if ( half <= n/2 ) {
        cout << SZ(ans1) << '\n' ;
        for( const int&i : ans1 ) cout << i << ' ' ;
    }else {
        cout << SZ(ans2) << '\n' ;
        for( const int&i : ans2 ) cout << i << ' ' ;
    }
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}
