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
    cin >>s ;
    string ans = "";
    for ( int i = SZ(s) - 1 , b = 0 , B = 0; i >= 0 ; i-- ) {
        if ( s[i] == 'b' ) { b++; continue; }
        if ( s[i] == 'B' ) { B++; continue; }
        if ( isupper(s[i]) ) {
            if ( B ) {B--; continue;}
            ans.push_back(s[i]);
        }else {
            if ( b ) {b--; continue;}
            ans.push_back(s[i]);
        }
    }
    reverse(all(ans));
    cout << ans << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}