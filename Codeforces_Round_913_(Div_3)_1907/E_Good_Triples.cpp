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
void accepted() {
    ll n ;
    cin >> n ;
    ll ans = 1 ;
    ll i = n ;
    while ( i > 0 ) {
        ll cur = 0 , num = i%10;
        for ( int i = 0 ; i < 10 ; i++ ) {
            for ( int j = 0 ; j < 10 ; j++ ) {
                for ( int k = 0 ; k < 10 ; k++ ) {
                    if ( i+j+k == num ) cur++;
                }
            }
        }
        if ( cur ) ans *= cur ;
        i /= 10;
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