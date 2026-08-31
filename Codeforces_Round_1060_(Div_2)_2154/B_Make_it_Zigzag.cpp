#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
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
    ll arr[n] ;
    ll prfx[n]{};
    for ( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
    for ( int i = 0 ; i < n ; i++ ) {
        prfx[i] = arr[i];
        if ( i ) prfx[i] = max(prfx[i], prfx[i-1]);
    }
    ll ans = 0;
    ll mx = arr[0];
    for ( int i = 0 ; i < n - 1; i++ ) {
        if ( !(i & 1) ) {
            arr[i+1] = max(mx,arr[i+1]);
            if ( arr[i] >= arr[i+1] ) {
                ans += abs(arr[i] - arr[i+1]) + 1;
                arr[i] = arr[i+1]-1;
            }
        } else {
            arr[i] = prfx[i];
            if ( arr[i] <= arr[i+1] ) {
                ans += abs(arr[i] - arr[i+1]) + 1;
                arr[i+1] = arr[i] - 1;
            }
        }
        mx = max({mx, arr[i], arr[i+1]});
    }
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}