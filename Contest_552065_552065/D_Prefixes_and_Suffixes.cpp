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
void accepted() {
    int n;cin>>n;
    const int sz = 2*n-2;
    map<string,deque<char>> mp;
    vector<string> v,tall , ans;
    for( int i = 0 ; i < sz ; i++ ) {
        string inp;cin>>inp;
        mp[inp];
        v.pb(inp);
        if ( SZ(inp) == n-1 ) tall.pb(inp);
    }
    ans.pb(tall[0]+tall[1][n-2]);
    ans.pb(tall[1]+tall[0][n-2]);
    string str;
    for( int i = 0 ; i < n-1 ; i++ ) {
        str+=ans[0][i];
        mp[str].push_back('P');
    }
    str.clear();
    for ( int i = n-1 ; i >= 0 ; i-- ) {
        str = ans[0][i] + str;
        mp[str].push_back('S');
    }
    // for( const auto&[f,s]:mp) {
    //     cout << f << " : ";
    //     for(const auto&i:s) {
    //         cout << i << " , ";
    //     }
    //     cout << '\n' ;
    // }
    bool flag = true ;
    for ( int i = 0 ; i < sz ; i++ ) {
        if ( !mp[v[i]].size() ) { flag = false ; break; }
    }
    if ( flag ) {
        for ( int i = 0 ; i < sz ; i++ ) cout << mp[v[i]].front() , mp[v[i]].pop_front() ;
        return;
    }
    for(const auto&[f,p]:mp) mp[f].clear();
    str.clear();
    for( int i = 0 ; i < n-1 ; i++ ) {
        str+=ans[1][i];
        mp[str].push_back('P');
    }
    str.clear();
    for ( int i = n-1 ; i >= 0 ; i-- ) {
        str = ans[1][i] + str;
        mp[str].push_back('S') ;
    }
    for ( int i = 0 ; i < sz ; i++ ) cout << mp[v[i]].front() , mp[v[i]].pop_front() ;
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