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
void accepted() {
    ll n , m , q ;
    cin >> n >> m >> q ;
    ordered_set<ll> os;
    for( int i = 0 ; i < m ; i++ ) {
        ll inp;cin>>inp;
        os.insert(inp);
    }
    for ( int i = 0 ; i < q ; i++ ) {
        ll inp;cin>>inp;
        os.insert(inp);
        ll order = os.order_of_key(inp);
        if (!order) cout << *os.find_by_order(order+1)-1;
        else if (order==os.size()-1) cout << n - *os.find_by_order(order-1)<< "\n";
        else {
            ll dif = (*os.find_by_order(order+1)-*os.find_by_order(order-1))/2;
            cout << dif ;
        }
        os.erase(inp);
        cout << "\n" ;
    }
}

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