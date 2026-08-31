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
    ll n, k;
    cin >> n >> k;
    // انا اعمي مبشوفش
    // if (k == 1) return void(cout << "YES\n");
    vector<ll> v(n + 1), ans(n + 1);
    for(int i = n - k + 1; i <= n; i++)
        cin >> v[i];
    if (k == 1) return void(cout << "YES\n");
    for(int i = n - k + 2; i <= n; i++)
        ans[i] = v[i] - v[i-1];
    bool is_sorted = true;
    for (int i = n - k + 2; i < n; i++) {
        if (ans[i] > ans[i+1]) {
            is_sorted = false;
            break;
        }
    }
    if (!is_sorted) return void(cout << "NO\n");
    if (v[n - k + 1] > ans[n - k + 2] * (n - k + 1)) return void(cout << "NO\n");
    cout << "YES\n";
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}