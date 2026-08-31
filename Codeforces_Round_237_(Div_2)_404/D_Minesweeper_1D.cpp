#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define prll(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const ll mod = 1e9 + 7;
const ll N = 1e6 + 7;
ll fact[N];
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }
ll sub(ll x, ll y) { return ((x % mod) - (y % mod) + mod) % mod; }
ll mult(ll x, ll y) { return ((x % mod) * (y % mod)) % mod; }
ll dp[N][5];
string s ;
ll n ;
/*
 * 0 -> 0
 * 1 -> _1
 * 2 -> 1_
 * 3 -> 2
 * 4 -> *
 */
ll solve( ll idx = 1 , ll type = 0 ) {
    if ( idx == n ) {
        if ( type == 2 || type == 3 ) return 0;

        return 1;
    }
    ll&ans = dp[idx][type] ;
    if (~ans) return ans;
    ans = 0;
    if ( s[idx] == '0' ) {
        if ( type != 2 && type != 3 && type != 4 )
            ans = add(ans,solve(idx+1,0));
    }
    else if ( s[idx] == '1' ) {
        if ( type == 4 ) ans = add(ans,solve(idx+1,1));
        else if ( type != 3 && type != 2 ) ans = add(ans,solve(idx+1,2));
    }
    else if ( s[idx] == '2' ) {
        if ( type == 4 ) ans = add(ans,solve(idx+1,3));
    }
    else if ( s[idx] == '*' ) {
        if ( type == 3 || type == 2 || type == 4 ) ans = add(ans,solve(idx+1,4));
    }
    else if ( s[idx] == '?' ) {
        if ( type == 0 || type == 1 ) {
            ans = add(ans,solve(idx+1,0));
            ans = add(ans,solve(idx+1,2));
        }else if ( type == 2 || type == 3 ) {
            ans = add(ans,solve(idx+1,4));
        }else if ( type == 4 ) {
            ans = add(ans,solve(idx+1,1));
            ans = add(ans,solve(idx+1,3));
            ans = add(ans,solve(idx+1,4));
        }
    }

    return ans;
}
void accepted() {
    memset(dp,-1,sizeof dp);
    cin >> s ;
    n = SZ(s) ;
    ll ans = 0;
    if (s[0] == '0' || s[0] == '?') ans = add(ans,solve(1,0));
    if (s[0] == '1' || s[0] == '?') ans = add(ans,solve(1,2));
    if (s[0] == '*' || s[0] == '?') ans = add(ans,solve(1,4));

    cout << ans;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--){
        accepted();
        // cout << "\n" ;
    }
    return 0;
}