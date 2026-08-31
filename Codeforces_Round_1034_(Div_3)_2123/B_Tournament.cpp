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
void accepted(){
    int n, j, k;
    cin >> n >> j >> k;
    j--;
    vector<int> v(n);
    int mx = -1;
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    if (k == 1 && v[j] != mx) cout << "NO\n";
    else cout << "YES\n";
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}