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
    getline(cin, s);
    int frq[26]{};
    for (int i = 0 ; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            frq[s[i] - 'a']++;
    }
    int ans = 0;
    for (int i = 0 ; i < 26; i++)
        ans += frq[i] > 0;
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
