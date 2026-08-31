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
    string s;
    cin >> s ;
    bool flag = false;
    for( int i = 0 ; i < SZ(s)-1 ; i++ ) {
        if ( s[i] == s[i+1] ) {
            flag = true;
            break;
        }
    }
    cout << (flag?1:SZ(s)) << '\n'; 
}

signed main() {
    ASSAF;
    int exe = 1;
     cin >> exe;
    while ( exe-- )
        accepted();
}
