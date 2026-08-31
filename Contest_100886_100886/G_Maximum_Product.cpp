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
int n;
string L, R;
const int N = 20;
ll dp[N][2][2][2];
ll solve(ll idx = 0,ll begin = 0, ll limL = 1, ll limR = 1) {
    if ( idx == n )
        return begin;

    ll &ans = dp[idx][begin][limL][limR];
    if (~ans)
        return ans;
    ans = 0;
    ll from = (limL?L[idx]-'0':0);
    ll to = (limR?R[idx]-'0':9);
    for ( int dig = from ; dig <= to ; dig++ ) {
        ll t1 = solve(idx+1, 1,limL && dig == from, limR && dig == to) * dig;
        ans = max(ans,t1);
        if ( !begin ) {
            ll t2 = solve(idx+1, 0, limL && dig == from, limR && dig == to);
            ans = max(ans, t2);
        }
    }
    return ans;
}
ll ans = 0;
void build(ll idx = 0,ll begin = 0, ll limL = 1, ll limR = 1) {
    if ( idx == n )
        return;

    ll sol = solve(idx,begin,limL,limR);
    ll from = (limL?L[idx]-'0':0);
    ll to = (limR?R[idx]-'0':9);
    for ( int dig = from ; dig <= to ; dig++ ) {
        ll t1 = solve(idx+1, 1,limL && dig == from, limR && dig == to) * dig;
        ll t2 = solve(idx+1, 0, limL && dig == from, limR && dig == to);
        if ( sol == t1 ) {
            ans = ans*10 + dig;
            build(idx+1, 1,limL && dig == from, limR && dig == to);
            return;
        }
        if ( sol == t2 ) {
            ans = ans*10 + dig;
            build(idx+1, 0, limL && dig == from, limR && dig == to);
            return;
        }
    }
}
void accepted() {
    cin >> L >> R;
    n = R.size();
    reverse(all(L));
    while ( L.size() < R.size() )
        L.push_back('0');
    reverse(all(L));
    memset(dp, -1, sizeof dp);
    build();
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}