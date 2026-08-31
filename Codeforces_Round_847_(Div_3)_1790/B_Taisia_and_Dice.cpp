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

int sumDice(vector<int> &v) {
    int sum = 0;
    loop(v.size())sum += v[i];
    return sum;
}

void solve() {
    int n, s, r;
    cin >> n >> s >> r;
    vector<int> v(n, 1);
    v[0] = s - r;
    for (int i = 1; i < n; i++) {
        while (v[i] < v[0] && sumDice(v) < s)
            v[i]++;
        if (sumDice(v) == s)
            break;
    }
    out_v(v, n);
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