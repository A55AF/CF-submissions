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
    int n;
    cin >> n;
    string num = to_string(n);
    int a = 0, b = 0;
    int x = 0;
    for (const char&i : num) {
        int dig = i - '0';
        if (dig&1) {
            if (!x) {
                a = a * 10 + (dig + 1) / 2;
                b = b * 10 + (dig - 1) / 2;
            } else {
                a = a * 10 + (dig - 1) / 2;
                b = b * 10 + (dig + 1) / 2;
            }
            x ^= 1;
        } else {
            a = a * 10 + dig / 2;
            b = b * 10 + dig / 2;
        }
        n /= 10;
    }
    cout << a << ' ' << b << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}