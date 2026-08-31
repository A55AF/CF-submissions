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
    int n , r ;
    cin >> n >> r ;
    int arr[n] , frq[n]{} , ans = 0;
    for( int i =0 ; i < n ; i++ ) cin >> arr[i] , ans+=arr[i];
    for( int i = 0 ; i < n ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            if ( arr[i] == 1 && abs(i-j) <= r - 1 ) frq[j] += 1;
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        if (!frq[i]) return void( cout << -1 );
        bool flag = false;
        for( int j = max(0,i-r+1) ; j <= min(n-1,i+r-1) ; j++ ) {
            if ( frq[j] == 1 ) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            for( int j = max(0,i-r+1) ; j <= min(n-1,i+r-1) ; j++ )
                frq[j]--;
            ans--;
        }
    }
    cout << ans ;
}
// 2 + 1 + 1 + 1 + 2 +
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