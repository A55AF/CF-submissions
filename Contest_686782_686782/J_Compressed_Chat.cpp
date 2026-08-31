#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s, t;
    cin >> s >> t;
    string tmp;
    char last = '.';
    for (int i = 0; i < s.size(); i++) {
        if (last == s[i]) continue;
        tmp.push_back(s[i]);
        last = s[i];
    }
    if (tmp == t) cout << "YES\n";
    else cout << "NO\n";
}
