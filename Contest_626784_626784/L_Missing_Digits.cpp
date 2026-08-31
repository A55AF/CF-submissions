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
const int N = 20;
string R;
ll dp[N][2][2][2];

ll solve(ll idx = 0, bool exceed = 0, bool four = 0, bool seven = 0) {
    if (idx == R.size()) {
        return !(four && seven);
    }

    ll &ans = dp[idx][exceed][four][seven];
    if (~ans)
        return ans;

    ans = 0;
    for (int d = 0; d <= 9; d++) {
        if (!exceed && d > R[idx] - '0') continue;

        ll new_exceed = (exceed || d < R[idx] - '0');
        ans += solve(idx + 1, new_exceed, four || (d == 4), seven || (d == 7));
    }
    return ans;
}

bool valid(string s) {
    bool four = false, seven = false;
    for (const auto&c : s) {
        four |= (c == '4');
        seven |= (c == '7');
    }
    return !(four && seven);
}

void accepted() {
    ll k;
    cin >> k;

    ll l = 1, r = 1e18;
    while (l <= r) {
        ll mid = (l + r) / 2;
        memset(dp, -1, sizeof dp);

        R = to_string(mid);

        ll ans = solve() - 1;

        if (ans == k && valid(R)) {
            cout << mid << '\n';
            break;
        }
        if (ans >= k) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
        accepted();
}
