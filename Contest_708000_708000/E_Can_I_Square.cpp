#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
#define inf (int)2e9
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    ll n;
    cin >> n;
    ll squares = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        squares += x;
    }
    ll sq = sqrtl(squares);
    if (sq * sq == squares) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
        accepted();
}
