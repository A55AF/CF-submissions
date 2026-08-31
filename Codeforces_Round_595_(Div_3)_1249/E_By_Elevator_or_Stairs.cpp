#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf (long long)(1e18)
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    ll n, c;
    cin >> n >> c;
    ll stairs[n]{}, elevator[n]{};
    for (int i = 0; i < n - 1; i++) cin >> stairs[i];
    for (int i = 0; i < n - 1; i++) cin >> elevator[i];
    vector<vector<ll> > dp(n, vector<ll>(2,inf));
    dp[0][0] = stairs[0];
    dp[0][1] = elevator[0] + c;
    cout << 0 << ' ' << min(dp[0][0] , dp[0][1]) << ' ' ;
    for (int i = 1; i < n - 1; i++) {
        dp[i][0] = min(dp[i-1][0] , dp[i-1][1] ) + stairs[i] ;
        dp[i][1] = min(dp[i-1][0] + c + elevator[i] , dp[i-1][1] + elevator[i]);
        cout << min(dp[i][0],dp[i][1]) << ' ' ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--) {
        accepted();
        // cout << "\n" ;
    }
    return 0;
}
