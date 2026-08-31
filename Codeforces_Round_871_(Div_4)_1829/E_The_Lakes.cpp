#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e8
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n , m ;
    cin >> n >> m ;
    ll arr[n][m];
    bool vis[n][m]{};
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ ) {
            cin >> arr[i][j] ;
        }
    }
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};
    ll ans = 0;
    ll cur = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ ) {
            if ( arr[i][j] && !vis[i][j] ) {
                queue<pair<ll,ll>> q;
                q.push({i,j});
                while ( !q.empty() ) {
                    auto[x,y] = q.front();
                    q.pop();
                    vis[x][y] = 1;
                    cur += arr[x][y];
                    for ( int u = 0 ; u < 4 ; u++ ) {
                        ll tx = x + dx[u] , ty = y + dy[u] ;
                        if ( tx >= 0 && tx < n && ty >= 0 && ty < m && !vis[tx][ty] && arr[tx][ty] )
                            q.push({tx,ty}) , vis[tx][ty] = 1;
                    }
                }
                ans = max(ans,cur);
                cur = 0;
            }
        }
    }
    cout << ans << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}