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
    ll n, q;
    cin >> n >> q ;
    while ( q-- ) {
        ll x, y;cin >> x >> y;
        ll ans;
        ll cnt = ( x - 1 ) * n + y;
        cnt = ( cnt + 1 ) / 2;
        if ( (x + y)&1 ) ans = cnt + (n*n+1)/2;
        else ans = cnt;
        cout << ans << '\n';
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}