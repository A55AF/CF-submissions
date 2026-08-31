#include <bits/stdc++.h>

typedef long long ll;
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define loop(n) for (int i = 0; i < n; i++)
#define rall(a) a.rbegin(), a.rend()
#define all(a) a.begin(), a.end()
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
    loop(sz) cout << v[i] << " ";
}

ll op(ll a, ll b) {
    if (b > a)
        return 0;
    return a - b;
}

void solve() {
    ll hb, hs, hc;
    ll pb, ps, pc, b = 0, s = 0, c = 0;
    ll r;
    string str;
    cin >> str >> hb >> hs >> hc >> pb >> ps >> pc >> r;
    loop(str.size()) {
        if (str[i] == 'S')
            s++;
        else if (str[i] == 'C')
            c++;
        else
            b++;
    }
    ll st = 0, en = 1e14;
    ll mx = 0;
    while (st <= en) {
        ll mid = (st + en) / 2;
        ll res = 0;
        if (hb >= (mid * b) && hc >= (mid * c) && hs >= (mid * s))
            mx = max(mx, mid), st = mid + 1;
        else {
            res = (ps * op(mid * s, hs)) + (pb * op((mid * b), hb)) + (pc * op((mid * c), hc));
            if (r < res)
                en = mid - 1;
            else
                mx = max(mx, mid), st = mid + 1;
        }
    }
    cout << mx;
}

int main() {
    FIO
    int t = 1;
    // cin >> t ;
    while (t--) {
        solve();
    }
    return 0;
}