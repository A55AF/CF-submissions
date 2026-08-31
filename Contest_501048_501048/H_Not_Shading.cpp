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

const int N = 200;

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
    int n, m;
    cin >> n >> m;
    int r, c;
    cin >> r >> c;
    r--, c--;
    char arr[n][m];
    int black = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'B')
                black++;
        }
    }
//    cout << black;
    if (black == 0) {
        cout << "-1";
    } else {
        if (arr[r][c] == 'B') {
            cout << "0";
            return;
        }
        int op = 0;
        bool check = false;
        for (int i = 0; i < n; i++) {
            if (arr[i][c] == 'B')
                check = true;
        }
        for (int i = 0; i < m; i++) {
            if (arr[r][i] == 'B')
                check = true;
        }
        if (check)
            op++;
        else {
            op += 2;
        }
        cout << op;
    }
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