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
    ll n, l;
    cin >> n >> l;
    ll num = 1, x = 0;
    while (n--) {
        num <<= 1;
        num |= x;
        x ^= 1;
        if (num > l) break;
    }
    if (n == -1) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}