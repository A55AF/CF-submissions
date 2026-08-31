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
    int n , m ;
    cin >> n >> m ;
    vector<ll> a(n) , b(m) ;
    for ( int i = 0 ; i < n ; i++ ) cin >> a[i] ;
    for ( int i = 0 ; i < m ; i++ ) cin >> b[i] ;
    sort(all(b));
    if ( b[0] - a[0] < a[0] ) a[0] = b[0] - a[0] ;
    bool valid = true;
    for ( int i = 1 ; i < n ; i++ ) {
        ll best = a[i-1];
        auto val = lower_bound(all(b),best+a[i]);
        if ( val != b.end()) {
            if ( (*val - a[i] < a[i] && *val - a[i] >= a[i-1]) || a[i] < a[i-1] )
                a[i] = *val - a[i];
        }
        if ( a[i] < a[i-1] ) valid = false;
    }
    cout << (valid?"YES\n":"NO\n");
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
