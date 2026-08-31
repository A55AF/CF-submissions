#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define print(x,z) int y = 0; for ( auto i : x ) \
     {if (y == z) break; cout << i << ' ' , y++;} cout << '\n';
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
    int n , m;
    cin >> n >> m ;
    ll a[n] , aa[n], b;
    for ( int i = 0 ; i < n ; i++ ) cin >> a[i];
    cin >> b;
    for ( int i = 0 ; i < n ; i++ )
        aa[i] = b-a[i];
    bool valid = true;
    for ( int i = 0 ; i < n ; i++ ) {
        a[i] = min(aa[i],b-aa[i]);
        if (!i) continue;
        if ( min(a[i],aa[i]) < a[i-1] ) a[i] = max(aa[i] , b-aa[i]);
    }
    for ( int i = 0 ; i < n-1 ; i++ ) {
        if ( a[i] > a[i+1] ) {
            valid = false;
            break;
        }
    }
    cout << (valid?"YES\n":"NO\n") ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}