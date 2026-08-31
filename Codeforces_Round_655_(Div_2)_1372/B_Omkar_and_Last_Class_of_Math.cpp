#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
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
ll lcm( ll x , ll y ) {return (x*y)/__gcd(x,y);}
void accepted() {
    ll n;cin>>n;
    vector<ll> v;
    for( int i = 1 ; i * i <= n ; i++ ) {
        if ( !(n%i) ) {
            v.pb(i);
            if ( i*i!=n) v.pb(n/i);
        }
    }
    ll mn = inf , mnn = inf;
    for ( int i = 0 ; i < sz(v) ; i++ ) {
        if ( v[i] == n ) continue;
        if( lcm(v[i],n-v[i]) < mn ) {
            mn = lcm(v[i],n-v[i]);
            mnn = v[i];
        }
    }
    cout << mnn << " " << n - mnn ;
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