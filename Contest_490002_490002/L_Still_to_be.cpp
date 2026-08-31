#include<bits/stdc++.h>

const int N = 2e5 + 50;
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
    int arr[n][n];
    int mxcol[n][n], mxrow[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            mxrow[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mxcol[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < n; i++)
        sort(mxrow[i], mxrow[i] + n, greater<int>());
    for (int i = 0; i < n; i++)
        sort(mxcol[i], mxcol[i] + n, greater<int>());
    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        int mx = arr[x - 1][y - 1];
        cout << mxrow[x - 1][mx - 1] << " " << mxcol[y - 1][mx - 1] << "\n";
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