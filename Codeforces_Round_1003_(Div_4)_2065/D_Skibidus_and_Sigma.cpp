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
    int n , m ;
    cin >> n >> m ;
    vector<ll> prfx[n];
    vector<pair<ll,ll>> v;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ ) {
            ll x;
            cin >> x ;
            prfx[i].push_back(x);
            if ( j ) prfx[i][j] += prfx[i][j-1];
        }
        v.push_back({prfx[i][m-1],i});
    }
    sort(rall(v));
    ll ans = 0 , last = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        const ll idx = v[i].S;
        for ( int j = 0 ; j < m ; j++ ) {
            ans += prfx[idx][j] + last;
        }
        last += v[i].F;
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