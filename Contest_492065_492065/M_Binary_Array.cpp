#include<bits/stdc++.h>

long long binary(long long x) {
    long long cnt = 0;
    while (x != 0) {
        if (x % 2 == 1)
            cnt++;
        x /= 2;
    }
    return cnt;
}

using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n], b[n], bin[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) bin[i] = binary(a[i]) * b[i];
    sort(bin, bin + n);
    int q;
    cin >> q;
    while (q--) {
        long long k;
        cin >> k;
        int l = 0, r = n - 1, indx = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (bin[mid] <= k) {
                indx = mid, l = mid + 1;
            } else
                r = mid - 1;
        }
        cout << indx + 1 << "\n";
    }
    return 0;
}
/*
6
7 11 15 2 5 3
1 1 1 1 1 1
*/