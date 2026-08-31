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
ll dp[N][N][2][2];
ll solve(ll idx = 0, ll digits = 0, ll limL = 1, ll limR = 1 ) {
    if ( idx == n ) {
        return digits <= 3;
    }
    ll &ans = dp[idx][digits][limL][limR];
    if (~ans)
        return ans;
    ans = 0;
    ll from = (limL?L[idx]-'0':0);
    ll to = (limR?R[idx]-'0':9);
    for ( int dig = from; dig <= to ; dig++ ) {
        ans += solve(idx+1, digits + (dig != 0), limL && dig == from, limR && dig == to);
    }
    return ans;
}
void accepted() {
    cin >> L >> R;
    n = R.size();
    reverse(all(L));
    while ( L.size() < R.size() )
        L.push_back('0');
    reverse(all(L));
    for ( int i = 0 ; i <= n; i++ )
        for ( int j = 0 ; j <= n ; j++ )
            for ( int a = 0 ; a < 2 ; a++ )
                for ( int b = 0 ; b < 2 ; b++ )
                    dp[i][j][a][b] = -1;
    cout << solve() << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}