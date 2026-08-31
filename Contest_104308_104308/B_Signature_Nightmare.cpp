#include<bits/stdc++.h>
using namespace std;

long long max(long long a, long long b) {
    if (a > b) return a;
    return b;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a, b;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            b.push_back(x);
        }
        long long l = 0, r = 2e9 + 10;
        long long mx = -1;
        while (l <= r) {
            long long val = (l + r) / 2;
            long long sf = k;
            for (int i = 0; i < n; i++) {
                long long form = b[i] / a[i];
                if (form >= val) continue;
                sf -= (val * a[i]) - b[i];
                if (sf < 0) break;
            }
            if (sf >= 0) mx = max(mx, val), l = val + 1;
            else r = val - 1;
        }
        cout << mx << "\n";
    }
}
