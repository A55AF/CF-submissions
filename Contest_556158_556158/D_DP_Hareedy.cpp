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
    ll n , k ;
    cin >> n >> k;
    vector<ll> v(n) ;
    for( int i = 0 ; i < n ; i++ ) cin>>v[i];
    sort(all(v));
    vector<ll> s;
    ll sum = 0;
    for( int i = 0 ; i < n ; i++ ) {
        if(i>k-1) s.pb(sum) , sum -= v[i-k];
        sum+=v[i];
    }
    s.pb(sum);
    double mn = inf;
    for( int i = 0 ; i < s.size() ; i++ ) {
        double res = double(s[i])/k-double(v[i]);
        if( res < mn ) mn = res;
    }
    cout << fixed << setprecision(8) << mn ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}
