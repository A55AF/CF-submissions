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
    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    for (int i = 0 ; i < n ; i++) {
        char op;
        ll val;
        cin >> op >> val;
        if (op == '+') x += val;
        else if (val <= x) {
            x -= val;
        } else {
            ans++;
        }
    }
    cout << x << ' ' << ans;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
