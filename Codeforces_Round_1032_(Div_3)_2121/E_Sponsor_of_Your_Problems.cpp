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
int n, start = 30;
string l, r;
const int N = 10;
int dp[N][2][2];
int f(int a, int b) {
    return a == b;
}
int solve(int idx = 0, int limL = 1, int limR = 1) {
    if ( idx == n )
        return 0;

    int &ans = dp[idx][limL][limR];
    if ( ans != start )
        return ans;
    int from = limL?l[idx]-'0':0;
    int to = limR?r[idx]-'0':9;
    for ( int dig = from; dig <= to; dig++ ) {
        ans = min(ans, solve(idx+1,limL && dig == from, limR && dig == to) + f(dig, l[idx]-'0') + f(dig, r[idx]-'0'));
    }
    return ans;
}
void accepted() {
    cin >> l >> r ;
    n = r.size();
    for ( int i = 0 ; i < n ; i++ )
        for ( int j = 0 ; j < 2 ; j++ )
            for ( int a = 0 ; a < 2 ; a++ )
                dp[i][j][a] = start;
    cout << solve() << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}