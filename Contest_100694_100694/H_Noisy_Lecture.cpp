#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    int n ;
    cin >> n ;
    int a[n] , b[n] ;
    for( int i = 0 ; i < n ; i++ ) cin>> a[i] ;
    for( int i = 0 ; i < n ; i++ ) cin>> b[i] ;
    int k ;
    cin >> k ;
    int sum = 0 ;
    for( int i = 0 ; i < k ; i++ ) {
        int x ;
        cin >> x ;
        sum+=x;
    }
    int mx = -1;
    for( int i = 0 ; i < n ; i++ )
        mx=max(a[i],mx);
    cout << sum + mx*k ;
    return 0;
}