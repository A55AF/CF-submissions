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
    ll x, d;
    cin >> x >> d;
    x <<= 1;
    if (x > d) cout << "take it";
    else cout << "double it";
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--)
        accepted();
}
