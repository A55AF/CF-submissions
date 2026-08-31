#include<bits/stdc++.h>
#include <iterator>
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
    cin >> n;
    string s;
    cin >> s;
    string new_s;
    new_s.push_back(s[0]);
    for(int i = 1, last = s[0] == '1'; i < n; i++) {
        if(s[i] != last + '0')
            new_s.push_back(s[i]);
        last = s[i] == '1';
    }
    int sz = new_s.size();
    if(sz <= 2) cout << sz << '\n';
    else cout << 1 << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
