#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;
    cin >> s;
    bool valid = true;
    for (int i = 0, j = (int)s.size() - 1; i < j ; i++, j--) {
        int a = s[i] - '0', b = s[j]  - '0';
        if (a != b && a != (7 - b)) {
            valid = false;
            break;
        }
    }
    if (valid) cout << "YES\n";
    else cout << "NO\n";
}
