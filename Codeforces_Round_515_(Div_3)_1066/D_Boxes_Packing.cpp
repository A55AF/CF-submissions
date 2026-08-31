#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define F first
#define S second
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
    ll n , m , k ;
    cin >> n >> m >> k ;
    ll arr[n]{},sfx[n]{};
    for( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
    ll sz = m*k;
    for( int i = n-1 ; i > -1 ; i-- ) {
        sfx[i]+=arr[i];
        if (i == n-1 ) continue;
        sfx[i] += sfx[i+1];
    }
    ll l = 0 , r = n-1 , ans = -1 ;
    while ( l <= r ) {
        ll mid = (l+r)/2 ;
        if ( sfx[mid] <= sz ) {\
            ll box = 0;
            for ( int i = mid , crnt = 0; i < n ; i++ ) {
                crnt+=arr[i];
                if( crnt > k ) box++ , crnt = arr[i] ;
                if ( i == n-1 && crnt != 0 ) box++ , crnt = 0;
            }
            if ( box <= m ) ans = max(ans,n-mid) , r = mid - 1 ;
            else l = mid + 1 ;
        }
        else l = mid + 1 ;
    }
    cout << ans ;
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