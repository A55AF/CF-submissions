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
ll n ;
const int N = 2e5 + 7;
ll dp[N][4][2];
ll arr[N];
// type -> 1 ==> odd
// type -> 2 ==> even
ll solve(ll idx = 0, ll type = 0, ll lazm_odd = 0) {
    if ( idx == n ) {
        return (type == 1 || type == 2 ) * -1e16;
    }

    ll&ans = dp[idx][type][lazm_odd];
    if ( ans != -infl ) return ans;
    ans = solve(idx+1, type, lazm_odd) + (idx&1 ? -arr[idx] : arr[idx]);

    if ( type == 0 ) {
        ans = max(ans, solve(idx + 1, idx&1 ? 1 : 2 , 0) + arr[idx] - idx);
        ans = max(ans, solve(idx + 1, idx&1 ? 1 : 2 , 1) - arr[idx] - idx);
    } else if ( type != 3 && lazm_odd == (idx&1) ) {
        ans = max(ans, solve(idx + 1, 3 , lazm_odd) + idx + arr[idx] * (type == 1 ? -1ll : 1ll));
    }

    return ans;
}
void accepted() {
    cin >> n ;

    // initialize dp
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < 4 ; j++ ) {
            for ( int x = 0 ; x < 2 ; x++ ) {
                dp[i][j][x] = -infl;
            }
        }
    }

    for ( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;

    cout << solve() << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}