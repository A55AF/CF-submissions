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
    int n , k ;
    cin >> n >> k ;
    int arr[n] , bits[n][31] {}, op[31] {};
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        int x = arr[i] ;
        string binary;
        while ( x > 0 ) {
            binary += (x%2) + '0';
            x /= 2 ;
        }
        for ( int j = 0 ; j < binary.size() ; j++) {
            bits[i][j] = binary[j] - '0' ;
        }
    }
    for ( int i = 0 ; i < 31 ; i++ ) {
        int operations = 0;
        for ( int j = 0 ; j < n ; j++ ) {
            operations += ( bits[j][i] == 0 );
        }
        op[i] = operations;
    }
    int ans = arr[0];
    for ( int i = 1 ; i < n ; i++ ) {
        ans &= arr[i] ;
    }
    for ( int i = 30 ; i >= 0 && k; i-- ) {
        if ( op[i] <= k ) {
            k -= op[i] ;
            ans |= 1<<i ;
        }
    }
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}