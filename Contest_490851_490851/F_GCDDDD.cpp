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

using namespace std;

void in_v(vector<ll> &v, int sz) {
    loop(sz) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
}

void out_v(vector<int> &v, int sz) {
    loop(sz)cout << v[i] << " ";
}

void solve() {
    int b;
    cin >> b;
    for (int i = 1; 1LL * i * i <= b; i++) {
        if (b % i == 0) {
            cout << i << " ";
            if (1LL * i * i != b)
                cout << b / i << " ";
        }
    }
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