#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define F first
#define S second
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
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
ll dist(pair<ll,ll> a , pair<ll,ll> b) {
    return abs(a.F - b.F) + abs(a.S - b.S);
}
pair<ll,ll> cmp1(pair<ll,ll>a,pair<ll,ll>&b) {
    if ( a.F==b.F) {
        if(a.S>b.S)
            return a;
        return b;
    }
    if(a.F<b.F)
        return a;
    return b;
}
pair<ll,ll> cmp2(pair<ll,ll>a,pair<ll,ll>&b) {
    if ( a.F==b.F) {
        if(a.S<b.S)
            return a;
        return b;
    }
    if(a.F>b.F)
        return a;
    return b;
}
void accepted() {
    ll n ;
    cin >> n ;
    map<ll,pair<ll,ll>> st,en;
    set<ll> lvls;
    for( int i = 0 ; i < n ; i++ ) {
        ll x,y;cin>>x>>y;
        ll lvl = max(x,y);
        lvls.insert(lvl);
        if (!st.count(lvl) ) {
            st[lvl] = {x,y};
            en[lvl] = {x,y};
            continue;
        }
        st[lvl] = cmp1({x,y},st[lvl]);
        en[lvl] = cmp2({x,y},en[lvl]);
    }
    ll dp[SZ(lvls)+1][2]{};
    ll id = 1 , prv = 0;
    for ( auto lvl : lvls ) {
        // 0 -> start , 1 -> end
        dp[id][0] = dp[id-1][1] + dist(en[lvl],en[prv]) + dist(st[lvl],en[lvl]);
        dp[id][0] = min(dp[id][0], dp[id-1][0] + dist(en[lvl],st[prv]) + dist(st[lvl],en[lvl]));
        dp[id][1] = dp[id-1][1] + dist(st[lvl] , en[prv]) + dist(st[lvl],en[lvl]);
        dp[id][1] = min(dp[id][1] , dp[id-1][0] + dist(st[lvl] , st[prv]) + dist(st[lvl],en[lvl]) );
        id++;
        prv=lvl;
    }id--;
    cout << min(dp[id][0] , dp[id][1]) ;
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