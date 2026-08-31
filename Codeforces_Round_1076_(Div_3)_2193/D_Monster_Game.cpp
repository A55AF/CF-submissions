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
    int n ;
    cin >> n ;
    vector<ll> a(n), b(n);
    for ( int i = 0 ; i < n ; i++ )
        cin >> a[i] ;
    for ( int i = 0 ; i < n ; i++ )
        cin >> b[i] ;

    vector<ll> prfx(n);
    for ( int i = 0 ; i < n ; i++ ) {
        prfx[i] += b[i] ;
        if ( i ) prfx[i] += prfx[i-1];
    }

    sort(all(a));
    ll ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        ll x = a[i] ;
        ll swords = n - i;
        ll l = 0, r = n-1;
        ll lvls = -1;
        while ( l <= r ) {
            ll mid = l + r >> 1;
            ll cur_lvls = prfx[mid];
            if ( swords >= cur_lvls )
                lvls = max(lvls,mid+1), l = mid + 1 ;
            else
                r = mid - 1;
        }
        ll score = x * lvls;
        ans = max(ans, score);
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