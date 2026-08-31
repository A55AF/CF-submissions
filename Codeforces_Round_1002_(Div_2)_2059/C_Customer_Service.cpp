#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define print(x,z) ll y = 0; for ( auto i : x ) \
  {if (y == z) break; cout << i << ' ' , y++;} cout << '\n';
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((ll)v.size())
#define infl (long long)1e18
#define S second
#define F first
typedef long long ll;
using namespace std;
// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n ;
    cin >> n ;
    int arr[n][n];
    for ( int i = 0 ; i < n ; i++ )
        for ( int j = 0 ; j < n ; j++ )
            cin >> arr[i][j] ;
    vector<int> v;
    for ( int i = 0 ; i < n ; i++ ) {
        int cnt = 0;
        for ( int j = n-1 ; j >= 1 ; j-- ) {
            if ( arr[i][j] > 1 ) break;
            cnt++;
        }
        if ( cnt )
        v.push_back(cnt);
    }
    sort(all(v));
    int ans = 1 ;
    for ( int i = 0 ; i < SZ(v) ; i++ )
        if ( v[i] >= ans ) ans++;
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    ll exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}