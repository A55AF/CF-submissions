#include <bits/stdc++.h>

#define _USE_MATH_DEFINES
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
const int N = 1e6 + 12;
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

bool isPrime(int n) {
    int div = 0;
    if (n == 1)
        return false;
    for (int i = 1; 1LL * i * i <= n; i++) {
        if (n % i == 0) {
            div++;
            if (1LL * i * i != n)
                div++;
        }
    }
    return div == 2;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int start = -1, end = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'B') {
            if (start != -1)
                end = i;
            else
                start = i;
        }
    }
    int ans = end - start + 1;
    if (start == -1 && end == -1)
        ans = 0;
    else if (end == -1)
        ans = 1;
    cout << ans;
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