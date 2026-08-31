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
#define inf 1e9
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
    int n ;cin>>n;
    vector<int> v;
    int mx = -1 ;
    for( int i = 0 ; i < n ; i++ ) {
        int inp;cin>>inp;
        v.pb(inp);
        mx=max(inp,mx);
    }
    if ( v[0]!=mx &&v[n-1] != mx ) return void ( cout << -1 ) ;
    int l = 0 , r = n-1 ;
    int ans[n]{};
    int st = 0 , en = n-1 ;
    int mid1 = (st+en)/2, mid2 = mid1+1;
    while ( mid1 >= 0 && mid2 < n ){
        ans[l]=v[mid1] , ans[r]= v[mid2] ;
        mid1--,mid2++;
        l++,r--;
        if ( mid2 == n && mid1 >= 0 ) {
            ans[l] = v[mid1] ;
            break;
        }
    }
    if (n==1) ans[l]=v[mid1];
    print(ans);
}

signed main() {
//    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
         cout << "\n" ;
    }
    return 0;
}
