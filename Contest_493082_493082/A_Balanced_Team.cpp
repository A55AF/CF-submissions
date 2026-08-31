#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int mx = 1;
    for (int i = 0; i < n; i++) {
        int l = 0, r = n - 1, indx = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            long long val = arr[mid];
            if (val <= 5 + arr[i])
                indx = mid, l = mid + 1;
            else
                r = mid - 1;
        }
        mx = max(mx, indx - i + 1);
    }
    cout << mx;
    return 0;
}