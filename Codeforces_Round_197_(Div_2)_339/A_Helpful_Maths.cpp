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
    int frq[4]{};
    for (int i = 0 ; i < (int)s.size(); i++) {
        if (s[i] == '+') continue;
        frq[s[i] - '0']++;
    }
    string ans;
    for (int i = 1; i <= 3; i++) {
        while (frq[i]--) {
            ans.push_back(i + '0');
            ans.push_back('+');
        }
    }
    ans.pop_back();
    cout << ans;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
