#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,m;cin >> m >> n;
        if (m == 1 ) {
            cout << ((n * (n  - 1))/2)   << "\n";
            continue;
        }
        if (m >= n - 1) {
            cout << n-1 << "\n";
            continue;
        }
        int cur = 1;
        int ans = 0;
        int cnt = 0;
        int tot = 1;
        while (tot < n) {
            cnt++;
            cur *= m;
            tot += cur;
            if (tot <= n) {
                ans += cnt * cur;
            }
            else ans += cnt * (n - (tot - cur));
        }
        cout << ans << "\n";
    }
}
