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
    string s ;
    cin >> s ;
    for ( int i = 0 ; i < 8 ; i++ ) {
        if ( s[1] - '0' == i+1 ) continue;
        cout << s[0] << i+1 <<'\n';
    }
    for ( int i = 0 ; i < 8 ; i++ ) {
        if ( s[0] == i + 'a') continue;
        cout << char(i+'a') << s[1]<<'\n';
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}