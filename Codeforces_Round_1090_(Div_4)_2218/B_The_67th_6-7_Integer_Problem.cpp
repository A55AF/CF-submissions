#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
#define infl (long long)1e18
using namespace std;
// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    vector<int> v(7);
    for(int i = 0 ; i < 7; i++) {
        cin >> v[i];
    }
    sort(all(v));
    int ans = 0;
    for(int i = 0 ; i < 7; i++) {
        ans += (i != 6 ? -v[i] : v[i]);
    }
    cout << ans << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
