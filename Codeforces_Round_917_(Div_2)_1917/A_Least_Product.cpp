#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long arr[n], pos = 0, neg = 0, zero = 0, pos_indx = -1, neg_indx = -1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > 0)
                pos++, pos_indx = i + 1;
            else if (arr[i] < 0)
                neg++, neg_indx = i + 1;
            else
                zero++;
        }

        if (zero > 0)
            cout << "0\n";
        else {
            if (neg == 0)
                cout << "1\n" << pos_indx << " " << "0\n";
            else {
                if (neg % 2 == 1)
                    cout << "0\n";
                else
                    cout << "1\n" << neg_indx << " " << "0\n";
            }

        }
    }
    return 0;
}