
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> c(n+1, -1);
    queue<int> pos;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if (s == "?") pos.push(i+1);
        else c[i] = stoll(s);
    }
    if (pos.size() == n) {cout << 0; return;}
    set<ll> s1;
    for (int i = 1; i <= n; i++) {
        if (c[i] == -1) continue;
        set<ll> s2;
        ll num = c[i]*i;
        s2.insert(num);
        int sig = 1, val= 1;
        for (int j = 1; j < i; j++) {
            s2.insert(num + ((-1*sig)*val));
            if (sig == -1) val++;
            sig *= -1;
        }
        if (s1.empty()) {
            s1 = s2;
        }
        else {
            set<ll> s3;
            for (auto &a : s2) {
                if (s1.find(a) != s1.end()) s3.insert(a);
            }
            s1 = s3;
        }
        if (s1.size() == 1) break;
    }
    cout << *s1.begin();
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    // cin>>t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
