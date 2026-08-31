#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    freopen("equal.in", "r", stdin);
    int t; cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b) {
            cout << "YES\n";
            continue;
        }
        else if (b == c) {
            cout << "YES\n";
            continue;
        }
        else if (c == a) {
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }
    return 0;
}