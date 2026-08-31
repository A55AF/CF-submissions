#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e8
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
ll n , k;
const int N = 2e5+7;
const ll mod = 1e9+7;
ll dp[N][64];
ll arr[N];
ll sub(ll x, ll y) { return ((x % mod) - (y % mod) + mod) % mod; }
ll bitcount(ll num) {
    int ans = 0;
    while ( num > 0 ) {
        ans += num%2==1;
        num /= 2;
    }
    return ans;
}
ll solve(ll idx = 0, ll AND = 63) {
    if ( idx == n ) {
        return bitcount(AND) == k;
    }

    ll&ans = dp[idx][AND] ;
    if ( ~ans ) return ans;

    ans = solve(idx+1, AND) + solve(idx+1, AND & arr[idx] );
    ans%=mod;
    return ans;
}
void accepted() {
    cin >> n >> k;
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i];
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < 64 ; j++ ) {
            dp[i][j] = -1;
        }
    }
    ll ans = solve();
    if ( k == 6 ) ans = sub(ans,1);
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}