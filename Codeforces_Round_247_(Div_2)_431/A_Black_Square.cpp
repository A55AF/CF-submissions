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
    int a, b, c, d;
    cin >> a >> b >> c >> d ;
    string s;
    cin >> s ;
    int sum = 0;
    for ( char ch : s ) {
        if ( ch == '1' ) {
            sum += a;
        } else if ( ch == '2' ) {
            sum += b ;
        } else if ( ch == '3' ) {
            sum += c;
        } else if ( ch == '4' ) {
            sum += d;
        }
    }
    cout << sum ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}