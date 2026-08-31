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
    string s, t;
    cin >> s >> t;
    int frq1[26]{}, frq2[26]{};
    for(int i = 0; i < s.size(); i++)
        frq1[s[i] - 'a']+=2;
    for(int i = 0; i < t.size(); i++)
        frq2[t[i] - 'a']++;
    bool fixed = false;
    for(int i = 0; i < 26; i++) {
        int diff = frq1[i] - frq2[i];
        if(diff > 1 || diff < 0 || (diff == 1 && fixed)) return void(cout << "NO\n");
        if(diff == 1 && !fixed) fixed = true;
    }
    cout << "YES\n";
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
