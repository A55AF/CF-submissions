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
void accepted(){
    ll n, d;
    cin >> n >> d;
    vector<ll> v(n);
    // انا اعمي مبشوفش
    // sort(all(v));
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i];
    }
    sort(all(v));
    int l = 0, r = n-1;
    ll p = v[r];
    ll ans = 0;
    while (l <= r) {
        if (p > d) {
            r--, ans++;
            if (r < 0) break;
            p = v[r];
            continue;
        }
        p += v[r];
        l++;
    }
    cout << ans ;
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}