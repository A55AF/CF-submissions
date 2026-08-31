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
    cin >> n;
    vector<ll> v(n);
    for (int i = 0 ; i < n ; i++) cin >> v[i];
    sort(all(v));
    ll diff = 2e9+12, cnt = 0;
    for (int i = 1 ; i < n ; i++) {
        ll cur_diff = abs(v[i] - v[i-1]);
        if (diff > cur_diff) {
            diff = cur_diff;
            cnt = 1;
        } else if (diff == cur_diff) cnt++;
    }
    cout << diff << ' ' << cnt ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}