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
    vector<int> v;
    for ( int i = 0 ; i < SZ(s) - 1 ; i++ ) {
        if ( s[i] != s[i+1] ) {
            v.push_back(s[i]-'0');
        }
    }
    v.push_back(s.back());
    int ans = SZ(v);
    if ( ans > 2 || ( ans == 2 && !v[0] )) ans--;
    cout << ans << '\n' ;
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
