#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e9
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
int n , m ;
const int N = 1007 , M = 1007;
int arr[N][M] , dpMin[N][M] , dpMax[N][M];
void accepted() {
    cin >> n >> m;
    for ( int i = 1 ; i <= n ; i++ ) {
        for ( int j = 1 ; j <= m ; j++ ) {
            cin >> arr[i][j];
        }
    }
    for ( int i = 1 ; i <= n ; i++ ) {
        for ( int j = 1 ; j <= m ; j++ ) {
            dpMin[i][j] = inf;
            dpMax[i][j] = -inf;
        }
    }
    if (!((n+m)&1)) return void(cout<<"NO");
    dpMin[1][1] = dpMax[1][1] = arr[1][1];
    for ( int i = 1 ; i <= n ; i++ ) {
        for ( int j = 1 ; j <= m ; j++ ) {
            // cout << "DPmin : " << dpMin[i][j] << " DPmax : " << dpMax[i][j] << "\n" ;
            if ( j+1 <= m ) {
                dpMin[i][j+1] = min(dpMin[i][j+1],dpMin[i][j]+arr[i][j+1]);
                dpMax[i][j+1] = max(dpMax[i][j+1],dpMax[i][j]+arr[i][j+1]);
            }
            if ( i + 1 <= n ) {
                dpMin[i+1][j] = min(dpMin[i+1][j] , dpMin[i][j]+arr[i+1][j]);
                dpMax[i+1][j] = max(dpMax[i+1][j] , dpMax[i][j]+arr[i+1][j]);
            }
        }
    }
    if ( 0 < dpMin[n][m] || 0 > dpMax[n][m] ) cout << "NO" ;
    else cout << "YES" ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}