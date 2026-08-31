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
    int n, x;
    cin >> n >> x;
    ll arr[n], sum = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    ll l = 0, r = n - 1;
    ll ans = -1, cur = sum;
    while (l <= r && cur % x == 0) {
        cur -= arr[r], r--;
    }
    ans = max(r - l + 1, ans);
    r = n-1, cur = sum;
    while (l <= r && cur % x == 0) {
        cur -= arr[l], l++;
    }
    ans = max(r - l + 1, ans);
    if (!ans) ans--;
    cout << ans << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}