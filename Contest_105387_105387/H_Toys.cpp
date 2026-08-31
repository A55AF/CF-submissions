
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> v(5 ,-1);

void getm(int val) {
    if (val>=v[0]) {
        v[4] = v[3];
        v[3] = v[2];
        v[2] = v[1];
        v[1] = v[0];
        v[0] = val;
    }
    else if (val>=v[1]) {
        v[4] = v[3];
        v[3] = v[2];
        v[2] = v[1];
        v[1] = val;
    }
    else if (val>=v[2]) {
        v[4] = v[3];
        v[3] = v[2];
        v[2] = val;
    }
    else if (val>=v[3]) {
        v[4] = v[3];
        v[3] = val;
    }
    else if (val>=v[4]) {
        v[4] = val;
    }
}

void solve() {
    ll n , a, k , p;
    cin>>n>>a>>k>>p;
    getm(a);
    for (int i = 1; i< n ; i++) {
           ll val = (a*k)%p;
            getm(val);
            a = val;
    }

    sort(v.begin(), v.end());
    for (auto x : v) {
        cout<<x<<' ';
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    // cin>>t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
