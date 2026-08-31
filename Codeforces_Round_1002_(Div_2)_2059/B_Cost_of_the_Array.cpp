#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define prll(x,z) ll y = 0; for ( auto i : x ) \
{if (y == z) break; cout << i << ' ' , y++;} cout << '\n';
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define inf (int)1e9
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
    int n , k ;
    cin >> n >> k ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
    if ( k == n ) {
        int ans = -1 , mx = -1;
        for ( int i = 1 , idx = 1 ; i < n ; i+=2 , idx++ ) {
            if ( arr[i] != idx ) {ans = idx ; break;}
            ans = idx + 1 ;
        }
        cout << ans << '\n' ;
        return;
    }
    int mn = inf;
    for (int i = 1 , idx = 1; i < n ; i++ , idx++) {
        if ( i + (k-2) >= n || mn == 1 ) break;
        if ( arr[i] != 1 ) mn = min(mn,1);
        if ( arr[i] != idx ) mn = min(mn,idx);
    }
    cout << mn << '\n' ;
}

signed main() {
    ASSAF;
    ll exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}