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
    ll n;
    cin >> n;
    map<ll,ll> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<ll> frq;
    for (const auto&[f,s] : mp) {
        frq.push_back(s);
    }
    sort(all(frq));
    ll ans = -1;
    for (int i = 1; i <= frq.back(); i++) {
        ll cur = i;
        ll nxt = i;
        ll idx = frq.size() - 1;
        while (!(nxt&1) && idx) {
            nxt /= 2;
            idx--;
            if (frq[idx] < nxt) break;
            cur += nxt;
        }
        ans = max(ans, cur);
    }
    cout << ans;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--)
        accepted();
}