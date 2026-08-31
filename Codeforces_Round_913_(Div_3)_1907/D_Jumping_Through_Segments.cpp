#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e9
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
    pair<int,int> arr[n];
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i].F >> arr[i].S ;
    int l = 0 , r = inf;
    int ans = inf;
    while ( l <= r ) {
        int k = (l+r)/2;
        pair<int,int> cur {0,0};
        for ( int i = 0 ; i < n ; i++ ) {
            cur.F = max(cur.F-k,arr[i].F);
            cur.S = min(cur.S+k,arr[i].S);
            if ( cur.F > cur.S ) break;
        }
        if ( cur.F > cur.S ) l = k + 1 ;
        else {
            ans = min(ans,k);
            r = k - 1;
        }
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