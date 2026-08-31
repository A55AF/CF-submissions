#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
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
int l = -1 , r = 1 ;
ordered_set<pair<int,int>> s;
map<int,int>mp;
void accepted() {
    char c;int x ;
    cin>>c>>x;
    if ( c == 'L' ) s.insert({l,x}) , mp[x] = l , l--;
    else if ( c == 'R' ) s.insert({r,x}) , mp[x] = r , r++;
    else {
        int ans = s.order_of_key({mp[x],x});
        int sz = SZ(s);
        cout << min(ans,sz-ans-1) << "\n" ;
    }
}
/*
5 2
1 0 0 0 1
 */
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        // cout << "\n" ;
    }
    return 0;
}