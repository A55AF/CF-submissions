#include<bits/stdc++.h>

typedef long long ll;
#define FIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
# define loop(n) for ( int i = 0 ; i < n ; i++ )
#define rall(a) a.rbegin(),a.rend()
#define all(a) a.begin(),a.end()
#define pf push_front
#define pb push_back
#define f(p) p.first
#define s(p) p.second
#define sz(x) x.size()

using namespace std;

void in_v(vector<int> &v, int sz) {
    loop(sz) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void out_v(vector<int> &v, int sz) {
    loop(sz)cout << v[i] << " ";
}

void solve() {
    int n;
    cin >> n;
    int a, x;
    int ans = 1e9, small = 1, great = 1e9;
    vector<int> not_equal;
    loop(n) {
        cin >> a >> x;
        if (a == 1) {
            if (x > small)
                ans -= (x - small), small = x;
        } else if (a == 2) {
            if (x < great)
                ans -= (great - x), great = x;
        } else if (a == 3) {
            not_equal.pb(x);
        }
    }
    loop(sz(not_equal)) {
        if (not_equal[i] >= small && not_equal[i] <= great)
            ans--;
    }
    if (ans < 0)
        ans = 0;
    cout << ans;
}

int main() {
    FIO
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}