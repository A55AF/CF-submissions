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
    ll n , m , k ;
    cin >> n >> m >> k;
    ll a[n] , b[m] , ans = 0;
    for ( int i = 0 ; i < n ; i++ ) cin >> a[i] ;
    for ( int i = 0 ; i < m ; i++ ) cin >> b[i] ;
    for ( int i = 0 , j = k; i <= k ; i++ , j-- ){
        if ( i >= n || j >= m ) continue;
        ans += a[i] * b[j] ;
    }
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}
