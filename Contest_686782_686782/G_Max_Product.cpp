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
const ll mod = 1e9 + 7;
ll mult(ll x, ll y) { return ((x % mod) * (y % mod)) % mod; }
void accepted() {
    int n, k;
    cin >> n >> k;
    ll ans = 1;
    for(int i = 0; i < n ; i++) {
        ll x;
        cin >> x;
        if(x < 0) x *= -1;
        ans = mult(ans, x);
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
