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
    cin >> n;
    vector<ll> odd;
    ll even = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        ll x; cin >> x ;
        if ( x&1 ) odd.push_back(x);
        else even+=x;
    }
    ll ans = even * (SZ(odd) >= 1);
    sort(rall(odd));
    for ( int i = 0; i < (SZ(odd)+1)/2 ; i++ ) {
        ans += odd[i] ;
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