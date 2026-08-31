#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> v;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    long long sum = 0;
    for (int i = 0; i < m; i++) {
        sort(v.begin(), v.end());
        auto it = v.begin();
        sum += *it;
        *it *= 2;
    }
    cout << sum;
    return 0;
}