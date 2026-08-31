#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long n, m;
    cin >> n >> m;
    vector<long long> v;
    for (int i = 0; i < m; i++) {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    long long time = 0;
     long long crnt = 1;
    for (int i = 0 ; i < m; i++) {
        if (v[i] > crnt)
            time += (v[i] - crnt);
        else if (v[i] < crnt)
            time += (n - abs(v[i] - crnt));
        crnt = v[i];
    }
    cout << time;
    return 0;
}
