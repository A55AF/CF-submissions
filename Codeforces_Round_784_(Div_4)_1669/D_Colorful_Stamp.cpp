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
    int n; string s;
    cin >> n >> s;
    bool ans = true;
    int r = 0, b = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( s[i] == 'W' ) {
            if ( r == b && !r ) continue;
            if ( !b || !r ) ans = false;
            r = 0, b = 0;
        } else if ( s[i] == 'B' ) b++;
        else r++;
    }
    if ( (!r && b) || (r && !b) ) ans = false;
    if ( ans ) cout << "YES\n" ;
    else cout << "NO\n" ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}