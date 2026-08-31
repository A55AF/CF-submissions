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
    ll n;
    cin >> n ;
    ll arr[n];
    for (int i = 0 ; i < n ; i++)
        cin >> arr[i];
    ll sum = 0, xr = 0, ans = 0;
    for (int i = 0 ; i < n ; i++) {
        sum += arr[i];
        xr ^= arr[i];
        if (sum > xr) {
            ans++;
            sum = xr = 0;
        }
    }
    if (ans == 0) ans--;
    cout << ans << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
