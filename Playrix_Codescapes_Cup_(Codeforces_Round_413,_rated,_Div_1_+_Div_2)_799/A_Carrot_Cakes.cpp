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
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int case1 = ((n + k - 1)/k) * t;
    int case2 = 1;
    int oven1 = 1, oven2 = 1;
    while (true) {
        if (case2 == t * oven1) n -= k, oven1++;
        if (case2 == d + t * oven2) n -= k, oven2++;
        if (n <= 0) break;
        case2++;
    }
    if (case1 <= case2) cout << "NO";
    else cout << "YES";
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}