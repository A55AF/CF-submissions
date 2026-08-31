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
    ll n , k ,g ;
    cin >> n >> k >> g ;
    ll opt = (g-1)/2;
    ll ans = min(opt*n,k*g);
    ll r = ((k*g) - ans)%g;

    if (r) {
        ans -= opt;
        ll tmp = (r + opt)%g;
        if ( tmp < (g+1)/2 ) ans += tmp;
        else ans -= (g - tmp);
    }
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- ) {
        accepted();
        cout << '\n' ;
    }
    return 0;
}