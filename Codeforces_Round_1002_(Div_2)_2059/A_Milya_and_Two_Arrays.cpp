#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define prll(x,z) ll y = 0; for ( auto i : x ) \
{if (y == z) break; cout << i << ' ' , y++;} cout << '\n';
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((ll)v.size())
#define inf (ll)1e9
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
    ll n;
    cin >> n ;
    set<ll> a , b;
    for (int i = 0 ; i < n ; i++ ) {
        ll x;
        cin >> x ;
        a.insert(x);
    }
    for (int i = 0 ; i < n ; i++ ) {
        ll x ;
        cin >> x ;
        b.insert(x);
    }
    if ( SZ(a) * SZ(b) >= 3 ) cout << "YES\n" ;
    else cout << "NO\n" ;
}

signed main() {
    ASSAF;
    ll exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}