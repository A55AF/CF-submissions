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
#define inf (long long)(1e9)
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
const int N = 1e5+6;
const int shift = 1e5;
void accepted() {
    int n ; string s ;
    cin >> n >> s ;
    vector<int> v;
    for( int i = 0 ; i < n ; i++ ) v.pb(s[i]=='0'?-1:1);
    int sum = 0;
    for( int i = 0 ; i < n ; i++ ) {
        sum += v[i] ;
        v[i] = sum;
    }
    vector<int> mp(2*N,-inf);
    int ans = 0;
    mp[shift] = -1;
    for( int i = 0 ; i < n ; i++ ) {
        if (mp[v[i]+shift]==-inf) mp[v[i]+shift] = i;
        ans = max(ans,i-mp[v[i]+shift]);
    }
    cout << ans ;
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
