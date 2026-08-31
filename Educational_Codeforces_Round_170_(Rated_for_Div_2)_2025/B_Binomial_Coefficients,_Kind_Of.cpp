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
const ll mod = 1e9+7;
ll mult(ll a , ll b ) { return (((a%mod)*(b%mod))%mod);}
ll add(ll a , ll b ) { return (((a%mod)+(b%mod))%mod);}
ll fast_pow (ll x,ll n){
    //  x  power n;
    ll res=1;
    while(n>0){
        if (n%2==1){
            res=mult(res,x);
        }
        x=mult(x,x);
        n/=2;
    }
    return res;
}
void accepted() {
    int t ;
    cin >> t; 
    int n[t]{},k[t]{};
    for( int i = 0 ; i < t ; i++ ) cin>>n[i];
    for( int i = 0 ; i < t ; i++ ) cin>>k[i];
    for( int i = 0 ; i < t ; i++ ) {
        if ( k[i] == n[i] ){ cout << "1" ; continue;}
        cout << fast_pow(2,k[i])<<'\n';
    }
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
