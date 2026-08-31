#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define input(x) for ( auto&i:x ) { cin >> i ; }
#define inf 1e16
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
    bool vis[n+1]{};
    int x;cin >> x;
    for( int i = 0 ; i < x ; i++ ) {
        int inp;cin>>inp;
        vis[inp]=1;
    }
    int y;cin>>y;
    for( int i = 0 ; i < y ; i++ ) {
        int inp;cin>>inp;
        vis[inp]=1;
    }
    bool f = true;
    for( int i = 1 ; i <= n ; i++ ) {
        if(!vis[i]) { f=false; break;}
    }
    cout << (f?"I become the guy.":"Oh, my keyboard!");
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