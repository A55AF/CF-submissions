#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
ll n, x;
const int N = 3e5 + 10;
ll arr[N];
ll dp[N][5];

ll solve(ll idx = 0, ll type = 0) {
    if (idx == n) return 0;

    ll &ans = dp[idx][type];
    if (ans != -1) return ans;

    if (type == 0) {
        ans = max({ans, solve(idx + 1, 0), solve(idx, 1)});
    }
    if (type == 1) {
        ans = max({ans, solve(idx + 1, 1) + arr[idx], solve(idx, 2)});
    }
    if (type == 2) {
        ans = max({ans, solve(idx + 1, 2) + arr[idx] * x, solve(idx, 3)});
    }
    if (type == 3) {
        ans = max({ans, solve(idx + 1, 3) + arr[idx], solve(idx, 4)});
    }
    if (type == 4) {
        ans = max(ans, solve(idx + 1, 4));
    }

    return ans;
}

void accepted() {
    memset(dp, -1, sizeof(dp));
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve();
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--) {
        accepted();
        //        cout << "\n" ;
    }
    return 0;
}
