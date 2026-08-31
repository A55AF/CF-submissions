#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define Mexico ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define el '\n';

signed main() {
    Mexico;
    int Tacos = 1;
    // cin >> Tacos;
    while (Tacos--) {
        ll n , k ;
        cin >> n >> k ;
        map<ll,ll> mp;
        // ll arr[n] ;
        for( int i = 0 ; i < n ; i++ ) {
            int inp;cin>>inp;
            mp[inp]++;
        }
        ll sum = 0;
        for( const auto&[f,s]:mp) {
            sum += s;
            if ( sum == k ) {
                cout << f ;
                return 0;
            }
        }
        if ( !k )
        {
            if (mp.begin()->first == 1) {
                cout << -1 << el;
            }
            else {
                cout << 1 << el;
            }
            continue;
        }
        cout << -1 ;
    }
    return 0;
}