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
    int arr[n][n - 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> arr[i][j];
        }
    }
    int start, indx;
    int frq[200] = {0};
    for (int i = 0; i < n; i++) {
        frq[arr[i][0]]++;
    }
    for (int i = 0; i < 200; i++) {
        if (frq[i] == n - 1)
            start = i;
        frq[i] = 0;
    }
    vector<int> ans;
    ans.pb(start);
    for (int i = 0; i < n; i++) {
        if (arr[i][0] != start) {
            indx = i;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        ans.pb(arr[indx][i]);
    }
    out_v(ans, n);
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