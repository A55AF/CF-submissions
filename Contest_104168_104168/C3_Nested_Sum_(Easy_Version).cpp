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
    ll n ;
    cin >> n ;
    ll arr[n] , prfx[n]{};
    for ( int i = 0 ; i < n ;  i++ ) {
        cin >> arr[i] ;
        if ( i ) prfx[i] += prfx[i-1];
        prfx[i] += arr[i] ;
    }
    ll ans = 0;
    for (int i = 1 ; i < n ; i++ ) {
        ans += arr[i] * prfx[i-1];
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
