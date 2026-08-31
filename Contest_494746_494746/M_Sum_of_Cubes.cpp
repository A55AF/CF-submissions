#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        bool check = false;
        for (int i = 1; i <= 10000; i++) {
            long long l = 1, r = 10000, val = 1LL * i * i * i;
            while (l <= r) {
                long long mid = (l + r) / 2;
                if (mid * mid * mid == x - val) {
                    check = true;
                    break;
                } else if (mid * mid * mid > x - val)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
