#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e9
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
    cin >> s;
    bool flag = false;
    char last = s[0];
    for ( int i = 0 ; i < SZ(s) ; i++ ) {
        if ( last != s[i] ) {
            flag = true;
            swap(s[i],s[i-1]);
            break;
        }
        last = s[i];
    }
    if ( flag ) {
        cout << "YES\n" << s << '\n';
    } else {
        cout << "NO\n";
    }
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
