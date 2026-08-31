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
    ll n , k , sum = 0;
    cin >> n >> k ;
    ll a[n] , b[n] ;
    vector<ll> diff;
    for ( int i = 0 ; i < n ; i++ ) cin >> a[i] , sum+=a[i] ;
    for ( int i = 0 ; i < n ; i++ ) cin >> b[i] , diff.push_back(b[i]-a[i]);
    sort(rall(diff));
    for ( int i = 0 , op = 0 ; i < n && op < k; i++ ) {
        if ( diff[i] < 0 ) break;
        if ( !diff[i] ) continue;
        sum+=diff[i],op++;
    }
    cout << sum << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}
