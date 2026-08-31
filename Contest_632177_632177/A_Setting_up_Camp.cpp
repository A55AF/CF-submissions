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
    ll a , b , c ;
    cin >> a >> b >> c ;
    ll tents = a + b / 3;
    b = b % 3 ;
    if ( b && (b + c) >= 3 ) {
        tents++;
        c -= 3 - b;
        b = 0;
    }
    if ( b ) return void( cout << -1 << '\n' );
    tents += (c + 2) / 3;
    cout << tents << '\n' ;

}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}