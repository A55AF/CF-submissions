#include <bits/stdc++.h>



typedef  long long ll;

using namespace std;


#define el cout << '\n';
#define yes cout<<"YES";
#define no cout << "NO";






void solve() {
    int n,m;
    cin >> n >> m;
    vector<vector<char>> grid(n+1, vector<char>(m+1));
    set<int> rows[n+1], cols[m+1];
    for (int i = 1; i <= n; i++) {rows[i].insert(0); rows[i].insert(m+1);}
    for (int i = 1; i <= m; i++) {cols[i].insert(0); cols[i].insert(n+1);}
    vector<vector<char>> s(n, vector<char>(m));
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> s[i][j];
    for (int i = 1; i < n; i++) for (int j = 1; j <= m; j++) grid[i][j] = s[n-i][j-1];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
        if (s[i][j] == '#') {
            rows[n-i].insert(j+1);
            cols[j+1].insert(n-i);
        }
    }
    string p;
    cin >> p;
    int ax = 1, ay = 1;
    for (auto &c : p) {
        if (c == 'D') {
            auto it = cols[ax].upper_bound(ay);
            it--;
            ay = (*it)+1;
        }
        else if (c == 'U') {
            auto it = cols[ax].upper_bound(ay);
            ay = (*it)-1;
        }
        else if (c == 'R') {
            auto it = rows[ay].upper_bound(ax);
            ax = (*it)-1;
        }
        else if (c == 'L') {
            auto it = rows[ay].upper_bound(ax);
            it--;
            ax = (*it)+1;
        }
    }
    cout << ax << ' ' << ay;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // freopen("promote.in" ,"r", stdin);
    // freopen("promote.out" ,"w", stdout);
    int t=1;
    // cin >> t;
    for (int i = 1; i <= t; ++i) {
        // cout<<"Case #"<<i<<": ";
        solve();
        // el;
    }
    return 0;
}