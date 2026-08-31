#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define infl (long long)1e18
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
int n;
const int N = 1e5+7;
vector<ll> v1, v2;
vector<vector<ll>> dp(N, vector<ll>(3, -1));
ll solve(ll idx = 0, ll team = 0) {
    if ( idx == n ) return 0;

    ll &ans = dp[idx][team];
    if (~ans) return ans;

    ll leave = solve(idx+1, 0);
    ll take = -infl;
    if ( team == 0 )
        take = max(solve(idx+1, 1) + v1[idx], solve(idx+1, 2) + v2[idx]);
    else if ( team == 1 )
        take = solve(idx+1, 2) + v2[idx];
    else if ( team == 2 )
        take = solve(idx+1, 1) + v1[idx];

    return ans = max(leave, take);
}
void accepted() {
    cin >> n ;
    for ( int i = 0 ; i < n ; i ++ ) {
        ll x;cin >> x;
        v1.push_back(x);
    }
    for ( int i = 0 ; i < n ; i ++ ) {
        ll x;cin >> x;
        v2.push_back(x);
    }
    ll ans = solve();
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}