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
    ll n ;
    cin >> n ;
    ll arr[n];
    map<ll,ll> frq;
    for ( int i = 0 ; i < n; i++ ) cin >> arr[i] , frq[arr[i]]++;
    vector<ll> nodes;
    ll ans = 0;
    ll num = 0;
    for ( const auto&[f,s] : frq ) {
        if ( s&1 ) ans += f*(s-1), num += s-1, nodes.push_back(f);
        else ans += f*s, num += s;
    }
    sort(rall(nodes));
    if ( SZ(nodes) == 1 ) {
        if ( ans > nodes.back() )
            ans += nodes.back(), num++;
    }
    else {
        ll l = 0 , r = 1;
        while ( r < SZ(nodes) ) {
            if ( ans + nodes[r] > nodes[l] ) {
                ans += nodes[l];
                num += 2;
                break;
            }
            l++,r++;
        }
        if ( r == SZ(nodes) ) r = SZ(nodes)-1;
        if ( SZ(nodes) && ans > nodes[r] ) ans += nodes[r], num++;
    }
    if ( num <= 2 ) ans = 0;
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}