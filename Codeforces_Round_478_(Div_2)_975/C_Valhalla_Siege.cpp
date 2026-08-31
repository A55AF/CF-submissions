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
#define inf (long long)(2e14)
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
    ll n , q ;
    cin >> n >> q ;
    ll a[n]{}, k[q]{} , prfx[n]{};
    for( int i = 0 ; i < n ; i++ ) {
        cin >> a[i] ;
        prfx[i] = a[i] ;
        if(!i)continue;
        prfx[i]+=prfx[i-1];
    }
    for( int i = 0 ; i < q ; i++ ) cin >> k[i] ;
    ll strength = 0;
    for( int i = 0 ; i < q ; i++ ) {
        ll l = 0 , r = n-1 ;
        ll ans = -1 , sum = prfx[n-1] ;
        strength += k[i];
        strength = min(inf,strength);
        while ( l <= r ) {
            ll mid = (l+r)/2;
            if ( prfx[mid] <= strength ) ans = max(ans,mid) , l = mid + 1 ;
            else r = mid - 1 ;
        }
        ans++;
        sum -= strength;
        if ( sum <= 0 ) ans = 0 , sum = prfx[n-1] , strength = 0;
        cout << n - ans << '\n' ;
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