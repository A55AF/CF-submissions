#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const ll N = 20, mod = 998244353;
ll n, k;
string l, r;
ll dpWays[N][1<<10][2][2][2];
ll dp[N][1<<10][2][2][2];
ll ten[N];
ll add(ll a, ll b) {
    return (a+b)%mod;
}
ll mul(ll a, ll b) {
    return (a*b)%mod;
}
void precompute() {
    ll cur = 1;
    for ( int i = 0 ; i < N ; i++ ) {
        ten[i] = cur;
        cur = mul(cur,10);
    }
}
ll solveWays(ll idx = 0, ll elonMask = 0,ll begin = 0 ,ll limL = 1, ll limR = 1) {
    if ( idx == n ) return __builtin_popcount(elonMask) <= k;

    ll &ans = dpWays[idx][elonMask][begin][limL][limR];
    if (~ans) return ans;
    ans = 0;
    ll from = limL?l[idx]-'0':0;
    ll to = limR?r[idx]-'0':9;
    for ( int dig = from ; dig <= to; dig++ ) {
        ll newMask = elonMask;
        if ( begin || dig ) newMask |= (1 << dig);
        ans = add(ans,solveWays(idx+1,newMask, begin || dig,limL && dig == from, limR && dig == to));
    }
    return ans;
}
ll solve(ll idx = 0, ll elonMask = 0,ll begin = 0, ll limL = 1, ll limR = 1) {
    if ( idx == n ) return 0;

    ll &ans = dp[idx][elonMask][begin][limL][limR];
    if ( ~ans ) return ans;
    ans = 0;
    ll from = limL?l[idx]-'0':0;
    ll to = limR?r[idx]-'0':9;
    for ( int dig = from ; dig <= to; dig++ ) {
        ll newMask = elonMask;
        if ( begin || dig ) newMask |= (1 << dig);
        ll val = mul(dig,mul(ten[n-idx-1],solveWays(idx+1, newMask, begin || dig,limL && dig == from, limR && dig == to)));
        ans = add(ans,add(solve(idx+1, newMask, begin || dig,limL && dig == from, limR && dig == to),val));
    }
    return ans;
}
void accepted() {
    memset(dpWays, -1, sizeof dpWays);
    memset(dp,-1,sizeof dp);
    cin >> l >> r >> k;
    n = r.size();
    l = string(r.size() - l.size(), '0') + l;
    cout << solve() ;
}

signed main() {
    ASSAF;
    precompute();
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}