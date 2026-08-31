#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    vector<long long> mnn;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    for (int i = 0; i < n; i++) {
        long long mn = 1e18 + 500;
        int l = 0, r = m - 1;
        long long left = 1e18 + 500, right = 1e18 + 500;
        while (l <= r) {
            int mid = (l + r) / 2;
            long long val = b[mid];
            if (val >= a[i])
                right = val, r = mid - 1;
            else if (val < a[i])
                l = mid + 1;
        }
        l = 0, r = m - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            long long val = b[mid];
            if (val <= a[i])
                left = val, l = mid + 1;
            else if (val > a[i])
                r = mid - 1;
        }
        mn = min(abs(left - a[i]), abs(right - a[i]));
        mnn.push_back(mn);
    }
    sort(mnn.begin(), mnn.end());
    cout << mnn[mnn.size() - 1];
    return 0;
}
