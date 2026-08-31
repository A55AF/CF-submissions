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
ll avg ( ll sum , ll num ) {
    num*=2;
    return ( sum + (num - 1) ) / num ;
}
void accepted() {
    ll n ;cin >> n ;
    ll arr[n];
    ll sum = 0;
    ll mx = -1 ;
    for( int i = 0 ; i < n ; i++ ) cin >> arr[i] , sum += arr[i] , mx = max(mx,arr[i]);
    ll num = 0 ;
    for( int i = 0 ; i < n ; i++ ) {
        if ( arr[i] < avg(sum,n)) num++;
    }
    if (n < 3 ) return void (cout << -1 ) ;
    ll l = 0 , r = 1e12 ;
    ll ans = inf ;
    while ( l <= r ) {
        ll mid = (l+r)/2 ;
        sum += mid;
        ll cnt = 0;
        for( int i = 0 , c = 0; i < n ; i++ ) {
            if ( arr[i] == mx && c == 0 ) {c++;continue;}
            if (arr[i] < avg(sum, n)) cnt++;
        }
        // cout << mid << " \n" ;
        sum -= mid ;
        if ( cnt > ((n)/2) ) r = mid - 1 , ans = min ( mid , ans );
        else l = mid + 1 ;
    }
    cout << ans ;
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