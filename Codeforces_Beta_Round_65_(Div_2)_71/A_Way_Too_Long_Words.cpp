#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n;
    cin >> n ;
    for (int i = 0 ; i < n ;i++) {
        string s;
        cin >> s;
        if ((int)s.size() > 10) cout << s[0] << (int)s.size() - 2 << s[(int)s.size() - 1];
        else cout << s;
        cout << '\n';
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
