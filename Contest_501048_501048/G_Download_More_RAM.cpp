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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    loop(n) {
        int x;
        cin >> x;
        v.pb(make_pair(x, 0));
    }
    loop(n) {
        int x;
        cin >> x;
        v[i].second = x;
    }
    sort(all(v));
//    cout << k << "\n";
    loop(n) {
        if (k >= v[i].first)
            k += v[i].second;
    }
    cout << k;
}

int main() {
    FIO
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}