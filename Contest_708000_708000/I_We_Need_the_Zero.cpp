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
    int n;
    cin >> n;
    int xr = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        xr ^= x;
    }
    if (!(n&1) && xr) return void(cout << -1 << '\n');
    for (int i = 0; i <= 256; i++) {
        if (!(xr ^ i)) {
            cout << i << '\n';
            break;
        }
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
        accepted();
}
