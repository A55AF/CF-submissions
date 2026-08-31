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
    vector<int> v;
    int ones = 0, twos = 0;
    loop(n) {
        int x, y;
        cin >> x;
        if (i == 0) {
            if (x == 1)
                ones++;
            else
                twos++;
        } else {
            if (x == 1 && y == x)
                ones++;
            else if (x == 1 && y != x) {
                v.pb(twos);
                twos = 0;
                ones = 1;
            } else if (x == 2 && y == x)
                twos++;
            else if (x == 2 && y != x) {
                v.pb(ones);
                twos = 1;
                ones = 0;
            }
        }
        y = x;
    }
    if (ones != 0) {
        v.pb(ones);
        ones = 0;
    }
    if (twos != 0) {
        v.pb(twos);
        twos = 0;
    }
    int maxl = -1;
    loop(v.size() - 1) {
        maxl = max(maxl, min(v[i], v[i + 1]));
    }
    cout << maxl * 2;
}

int main() {
    FIO
    int t = 1;
    //cin >> t ;
    while (t--) {
        solve();
    }
    return 0;
}