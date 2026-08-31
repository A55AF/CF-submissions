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
ll mod;
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }
void accepted() {
    ll n , k;
    cin >> n >> k ;
    k--;
    if ( n&1 ) {
        ll tmp = n / 2 ;
        ll skipped_days = k / tmp;
        cout << (k + skipped_days) % n + 1 << '\n' ;
    } else {
        cout << k % n + 1 << '\n' ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}