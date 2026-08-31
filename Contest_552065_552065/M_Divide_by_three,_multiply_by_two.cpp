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
ll n;
vector<ll> ans , res ;
multiset<ll> s;
void solve(ll num) {
    if ( SZ(res) == n ) {
        ans = res ;
        return;
    }

    if ( s.find(num) != s.end() ) {
        res.pb(num);
        s.extract(num);
        solve(num*2) ;
        res.pop_back();
        s.insert(num);
        if (!(num%3) ) {
            res.pb(num);
            s.extract(num);
            solve(num/3);
            res.pop_back();
            s.insert(num);
        }
    }
}
void accepted() {
    cin >> n ;
    vector<ll> v;
    for( int i = 0 ; i < n ; i++ ) {
        ll inp;
        cin >> inp;
        v.pb(inp);
        s.insert(inp);
    }
    for(const auto&i:v) {
        solve(i);
    }
    for( const auto&i:ans) cout << i << " " ;
}

signed main() {
    ASSAF;
    int exe = 1;
    //    cin >> exe;
    while (exe--){
        accepted();
        // cout << "\n" ;
    }
    return 0;
}
