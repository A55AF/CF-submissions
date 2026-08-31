#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define input(x) for ( auto&i:x ) { cin >> i ; }
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
    int n;cin>>n;
    int arr[n];
    input(arr);
    int ans =0 , st = 0 , en = n-1;
    for( int i = 0 ; i < n ; i++ ) {
        if ( arr[i] != i+1 ) {
            ans++ , st = i;
            break;
        }
    }
    for( int i = n-1 ; i >= 0 ; i-- ) {
        if ( arr[i] != i+1 ) {
            en = i;
            break;
        }
    }
    if (!ans) return void(cout << ans );

    for ( int i = st ; i <= en ; i++) {
        if(arr[i]==i+1) {
            ans++;
            break;
        }
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