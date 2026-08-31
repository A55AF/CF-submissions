#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
#define infl (long long)1e18
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 8003;
void accepted() {
    ll n;
    cin >> n;
    vector<ll> v(n) , cost(n);
    map<ll,ll> id;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i] ;
        id[v[i]]++;
    }
    ll cur_id = 1;
    for ( const auto&[f,s] : id) {
        id[f] = cur_id;
        cur_id++;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        v[i] = id[v[i]];
    }

    for ( int i = 0 ; i < n ; i++ )
        cin >> cost[i] ;

    ll dp[2][N];
    for ( int i = 0 ; i < N ; i++ ) {
        dp[0][i] = infl;
        dp[1][i] = infl;
    }

    dp[0][1] = 0 ;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int val = 1 ; val < N ; val++ ) {
            dp[(i+1)%2][val] = min(dp[(i+1)%2][val], dp[i%2][val] + cost[i] * (val != v[i]));
            dp[i%2][val+1] = min(dp[i%2][val+1], dp[i%2][val]);
        }

        for ( int j = 0 ; j < N ; j++ ) {
            dp[i%2][j] = infl;
        }
    }

    ll ans = infl;
    for ( int i = 1 ; i < N ; i++ )
        ans = min(ans, dp[n%2][i]);
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}