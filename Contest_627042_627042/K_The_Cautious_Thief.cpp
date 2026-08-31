#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define infl (long long)1e18

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<int> v(n);
    ll day = infl, l = -1, r = -1, total = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i];
        if (v[i]/x < day) day = v[i]/x, r = i;
    }
    for (int i = 0; i <= r ; i++) {
        if (v[i]/x == day) {
            l = i;
            break;
        }
    }
    for (int i = n-1; i >= r; i--) {
        if (v[i]/x == day) {
            r = i;
            break;
        }
    }
    total = x * day * n;
    day++;
    ll idx;
    if (day&1) total += x * l, idx = l;
    else total += x * (n - r - 1), idx = r;
    idx++;
    cout << day << ' ' << idx << ' ' << total;
}