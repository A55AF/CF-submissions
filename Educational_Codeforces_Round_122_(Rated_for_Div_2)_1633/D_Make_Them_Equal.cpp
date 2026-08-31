#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e9
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 1007 ;
int n , k ;
set<int> v[N];
int d[2*N+1] , dp[N][15*N] , b[N] , c[N];
void pre_calc() {
    v[1].insert(1);
    for ( int i = 2 ; i < N ; i++ ) {
        for ( int j = 1 ; j <= i ; j++ ) {
            v[i].insert(i/j);
        }
    }
}
void calc_min_op(){
    d[1] = 0;
    for ( int i = 1 ; i < N ; i++ ) {
        for ( const auto&it:v[i]) {
            d[i+it] = min(d[i+it],d[i]+1);
        }
    }
}
int solve(int idx = 0 , int s = 0 ) {
    if ( idx == n ) return 0;
    int&ans = dp[idx][s];
    if (~ans) return ans;

    int take = -inf;
    if (s+d[b[idx]]<=k)
        take = solve(idx+1,s+d[b[idx]]) + c[idx];
    int leave = solve(idx+1,s);
    return ans = max(take,leave);
}
void accepted() {
    memset(dp,-1,sizeof dp);
    cin >> n >> k;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> b[i] ;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> c[i] ;
    }
    cout << solve();

    // for ( int i = 0 ; i <= 10 ; i++ ) {
    //     cout << i << " : " ;
    //     for ( const auto&it:v[i]) {
    //         cout << it << " , " ;
    //     }
    //     cout << '\n' ;
    // }

    // for ( int i = 1 ; i < N ; i++ ) {
    //     cout << i << " : " << d[i] << '\n' ;
    // }
}

signed main() {
    ASSAF;
    pre_calc();
    d[1] = 0;
    for (int i = 2 ; i < N ; i++ ) d[i] = inf;
    calc_min_op();
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}