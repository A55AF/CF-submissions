#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 1; i <= n; i++)
            v.push_back(i);
        reverse(v.begin() + k, v.end());
        for (auto it: v)
            cout << it << " ";
        cout << "\n";
    }
    return 0;
}