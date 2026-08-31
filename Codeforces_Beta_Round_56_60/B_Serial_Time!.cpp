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
int dx[] {1,-1,0,0,0,0};
int dy[] {0,0,1,-1,0,0};
int dz[] {0,0,0,0,1,-1};
int k , n , m ;
void accepted() {
    cin >> k >> n >> m ;
    char arr[k][n][m] {};
    bool vis[k][n][m] {};
    for( int i = 0 ; i < k ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            for( int x = 0 ; x < m ; x++  ){
                cin >> arr[i][j][x];
            }
        }
    }
    int a , b ,ans = 0;
    cin >> a >> b ;
    a--,b--;
    queue<tuple<int,int,int>> q;
    q.push({0,a,b});
    vis[0][a][b] = 1;
    while (SZ(q)){
        auto[z,x,y] = q.front();
        vis[z][x][y] = 1;
        q.pop();
        ans++;
        for( int i = 0 ; i < 6 ; i++ ) {
            int tx = x + dx[i] , ty = y + dy[i] , tz = z + dz[i] ;
            if 
            (
                tx >= 0 && tx < n &&
                ty >= 0 && ty < m &&
                tz >= 0 && tz < k &&
                !vis[tz][tx][ty]  &&
                arr[tz][tx][ty] != '#'
            ) q.push({tz,tx,ty}) , vis[tz][tx][ty] = 1;
        }
    }
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}