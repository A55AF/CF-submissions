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
    ll n,k ;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> prfx(n);
    for ( int i = 0 ; i < n ; i++ )
        cin >> v[i] ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        if ( v[i] >= 2*v[i+1] ) {
            prfx[i+1] = 1;
        }
    }
    for ( int i = 1 ; i < n ; i++ ) {
        prfx[i] += prfx[i-1];
    }
    int ans = 0;
    for ( int i = k ; i < n ; i++ ) {
        int flag = prfx[i];
        if ( i - k >= 0 ) flag -= prfx[i-k];
        if ( !flag ) ans++;
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