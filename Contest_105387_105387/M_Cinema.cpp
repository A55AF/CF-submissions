#include <bits/stdc++.h>



typedef  long long ll;

using namespace std;


#define el cout << '\n';
#define yes cout<<"YES";
#define no cout << "NO";






void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++ ) cin >> a[i];
    vector<int> b(n);
    vector<int> seated(n+1, -1);
    ll ans = 0;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (seated[a[i]] == -1) {
            seated[a[i]] = i;
            continue;
        }
        else {
            int seat = seated[a[i]];
            if (b[seat] >= b[i]) {
                ans += b[i];
                q.push(i);
            }
            else {
                ans += b[seat];
                q.push(seat);
                seated[a[i]] = i;
            }
        }
    }
    vector<int> anss(n,0);
    for (int i = 1; i <= n; i++) {
        if (seated[i] == -1) {
            seated[i] = q.front();
            q.pop();
        }
        anss[seated[i]] = i;
    }
    cout << ans << '\n';
    for (int i = 0; i < n; i++) cout << anss[i] << ' ';
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