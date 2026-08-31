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
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int bit = 0; bit < m; bit++) {
            if (v[i][bit] == '1') {
                ans ^= (m - bit) % (k + 1);
                break;
            }
        }
    }
    if (!ans) cout << "Hala\n";
    else cout << "Faris\n";
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
        accepted();
}