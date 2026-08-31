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
#define inf 3e18
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
const int N = 1e5+7;
void accepted() {
    int n;
    cin >> n ;
    ll frq[N]{};
    ll ans = -1 ;
    for(int i =0;i<n;i++) {
        ll inp;cin>>inp;
        frq[inp]++;
        ans=max(ans,inp);
    }
    ll dp[N][2]{};
    dp[0][0]=0,dp[0][1]=0*frq[0];
    for(int i=1;i<=ans;i++) {
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
        dp[i][1]=dp[i-1][0]+i*frq[i];
    }
    cout << max(dp[ans][0],dp[ans][1]) ;
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