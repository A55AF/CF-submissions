#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) (long long)(v.size())
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
    ll n , x ;
    cin >> n >> x ;
    ll sum = 0 , mx = -1 ;
    for( int i = 0 ; i < n ; i++ ) {
        ll inp;cin>>inp;
        sum+=inp,mx=max(mx,inp);
    }
    ll l = 1 , r = 1e15 , ans = inf;
    while(l<=r) {
        ll mid = (l+r)/2 ;
        if(x*mid>=sum&&mid>=mx) ans=min(mid,ans) ,r = mid -1;
        else l = mid + 1;
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