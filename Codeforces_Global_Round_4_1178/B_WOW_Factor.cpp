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
    string s;
    cin >> s;
    int n = s.size();
    ll prfx[n+1]{}, sfx[n+1]{};
    for (int i = 0 ; i < n ; i++) {
        if (i && s[i] == 'v' && s[i-1] == 'v') {
            prfx[i]++;
        }
        if (i) prfx[i] += prfx[i-1];
    }
    for (int i = n-1; i >= 0; i--) {
        if (i+1 < n && s[i] == 'v' && s[i+1] == 'v') {
            sfx[i]++;
        }
        if (i) sfx[i] += sfx[i+1];
    }
    ll ans = 0;
    for (int i = 0 ; i < n ; i++) {
        if (s[i] != 'o') continue;
        ans += prfx[i] * sfx[i];
    }
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}