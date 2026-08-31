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
const int N = 1e5 + 7;
vector<ll> divs[N];
vector<ll> mult[N];
void precompute() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            divs[j].push_back(i);
        }
    }
}
ll solve(ll g, ll xr) {
    return (g * 10000ll) / xr;
}
void accepted() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(all(v));
    v.erase(unique(all(v)), v.end());

    vector<ll> div;
    for (const auto&num : v) {
        for (const auto&d : divs[num]) {
            div.push_back(d), mult[d].push_back(num);
        }
    }
    sort(all(div));
    div.erase(unique(all(div)), div.end());

    ll ans = 0;
    for (const auto&d : div) {
        sort(all(mult[d]));
        ll mn = inf;
        for (int i = 1; i < mult[d].size(); i++) mn = min(mn, mult[d][i] ^ mult[d][i - 1]);
        ans = max(ans, solve(d, mn));
        mult[d].clear();
    }
    cout << ans << '\n';
}

signed main() {
    ASSAF;
    precompute();
    int exe = 1;
    cin >> exe;
    while (exe--)
        accepted();
}