#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define infl (long long)1e18
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    ll n , k;
    cin >> n >> k;
    ll arr[n];
    ll mx = -1;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
        mx = max(mx,arr[i]);
    }

    ll l = mx , r = 1e14;
    ll ans = infl;
    while ( l <= r ) {
        ll mid = (l+r)/2;
        ll num = 0 , load = 0;
        for ( int i = 0 ; i < n ; i++ ) {
            load+=arr[i];
            if ( load > mid ) {
                num++;
                load = arr[i];
            }
        }
        num++;
        if ( num > k ) l = mid + 1;
        else r = mid - 1 , ans = min(ans,mid);
    }
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}