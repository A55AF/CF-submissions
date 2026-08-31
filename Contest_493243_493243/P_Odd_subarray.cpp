#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> odd;
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        if (inp % 2 == 1)odd.push_back(i);
    }
    if (odd.empty()) {
        cout << -1;
        return 0;
    }
    vector<int> sol;
    sol.push_back(odd[0]);
    for (int i = 1; i < odd.size(); i++) {
        sol.push_back(odd[i] - odd[i - 1] - 1);
    }
    if (odd[odd.size() - 1] != n - 1)
        sol.push_back(n - 1 - odd[odd.size() - 1]);
    if (sol.size() == 1) {
        cout << n;
        return 0;
    }
    int st = sol[0] + sol[1];
    int mx = st;
    for (int i = 1; i < sol.size() - 1; i++) {
        st -= sol[i - 1];
        st += sol[i + 1];
        mx = max(mx, st);
    }
    cout << mx + 1;
    return 0;
}