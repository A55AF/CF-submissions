#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( const auto&i : x ){ cout << i << " ";}
#define input(x) for ( auto&i : x ) { cin >> i ; }
#define inf 1e6
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
int n,a,b,c;
const int N = 1e5+8;
int dp[N];
void accepted() {
    memset(dp,0,sizeof(dp));
    cin>>n>>a>>b>>c;
    dp[a] = dp[b] = dp[c] = 1;
    for ( int i = min({a,b,c}) ; i <= n ; i++ ) {
        if (!dp[i])continue;
        dp[i+a] = max(dp[i+a],dp[i] + 1);
        dp[i+b] = max(dp[i+b],dp[i] + 1);
        dp[i+c] = max(dp[i+c],dp[i] + 1);
    }
    cout << dp[n] ;
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