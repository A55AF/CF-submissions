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
    ll n;
    cin >> n ;
    vector<ll> deals ;
    while ( n >= 3 ) {
        ll x = logl(n) / logl(3) ;
        ll deal = powl(3,x);
        deals.push_back(x);
        n -= deal;
    }
    ll coins = 3*n;
    for ( const ll&deal : deals ) {
        coins += powl(3,deal+1) + deal * powl(3, deal - 1);

    }
    cout << coins << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}