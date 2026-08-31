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
void accepted() {
    int n , m;
    cin >> n >> m ;
    char arr[n+1][m] , ans[n+1][m] {};
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ ) {
            cin >> arr[i][j] ;
        }
    }
    for ( int i = 0 ; i < m ; i++ ) {
        arr[n][i] = 'o';
    }
    int last_obstacle = n;
    for ( int i = 0 ; i < m ; i++ ) {
        for ( int j = n ; j >= 0 ; j-- ) {
            if ( arr[j][i] == 'o' ) {
                ans[j][i] = 'o', last_obstacle = j;
            } else if ( arr[j][i] == '*' ) {
                ans[last_obstacle-1][i] = '*' ;
                last_obstacle--;
            }
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ ) {
            if ( ans[i][j] != 'o' && ans[i][j] != '*' ) {
                ans[i][j] = '.' ;
            }
            cout << ans[i][j] ;
        }
        cout << '\n' ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}