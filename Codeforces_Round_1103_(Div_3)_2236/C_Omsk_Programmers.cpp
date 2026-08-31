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
    ll a, b, x;
    cin >> a >> b >> x;
    if(a > b) swap(a, b);
    ll ans = abs(a - b), div = 0;
    while(a != b) {
        b /= x;
        div++;
        ans = min(ans, div + abs(a - b));
        if (a > b) swap(a, b);
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
