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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<bool> s1(13), s2(13);
    int i = a+1;
    while ( true ) {
        i = i%12 + 12 * ( i%12 == 0 );
        if ( i == b ) break;
        s1[i] = true;
        i++;
    }
    i = a-1;
    while ( true )  {
        i = i%12 + 12 * ( i%12 == 0 );
        if ( i == b ) break;
        s2[i] = true;
        i--;
    }
    if ( (s1[c] && s1[d]) || (s2[c] && s2[d]) )
        cout << "NO\n";
    else cout << "YES\n";
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
