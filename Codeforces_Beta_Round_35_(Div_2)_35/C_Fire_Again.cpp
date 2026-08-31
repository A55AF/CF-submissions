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
    ll n , m;
    cin >> n >> m ;
    vector<pair<ll,ll>> v;
    bool vis[n][m] {};
    ll k ;
    cin >> k ;
    while ( k-- ) {
        ll x , y ;
        cin >> x >> y ;
        x--,y--;
        vis[x][y] = true;
        v.push_back({x,y});
    }
    ll mx = -1 ;
    pair<ll,ll> ans = {0,0};
    for ( ll i = 0 ; i < n ; i++ ) {
        for ( ll j = 0 ; j < m ; j++ ) {
            if ( vis[i][j] ) continue;
            ll res = inf;
            for ( const auto&[f,s] : v ) {
                res = min(res,abs(f-i) + abs(s-j));
            }
            if (  res > mx )
                mx = res , ans = {i,j};
        }
    }
    cout << ans.F + 1 << " " << ans.S + 1 << '\n' ;
}

signed main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ASSAF;
    ll exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}