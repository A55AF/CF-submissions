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
    int n;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }
    bool odd_parity = (arr[0]&1) , even_parity = (arr[1]&1) ;
    for ( int i = 2 ; i < n ; i++ ) {
        if ( (i+1)&1 && (arr[i]&1) != odd_parity ) {
            return void( cout << "NO\n" );
        }
        if ( !((i+1)&1) && (arr[i]&1) != even_parity ) {
            return void( cout << "NO\n" );
        }
    }
    cout << "YES\n" ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}