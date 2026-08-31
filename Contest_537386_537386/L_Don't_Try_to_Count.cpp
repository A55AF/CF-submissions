#include<bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

// Is b a substring from a
bool is_substring(string a, string b) {
    if (b.size() > a.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[0]){
            bool is_valid = true;
            for (int j = 0; j < b.size(); j++) {
                if (i + j >= a.size()) {
                    is_valid = false;
                    break;
                }

                if (a[i + j] != b[j]) {
                    is_valid = false;
                    break;
                }
            }

            if (is_valid) return true;
        }
    }
    return false;
}

int main() {
    fast; // ACCEPTED SNIPERS
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int answer = 0;
        bool can = false;
        while ((int)a.size() <= 128) {
            if (is_substring(a, b)) {
                can = true;
                break;
            }

            a += a;
            answer++;
        }

        if (can) cout << answer << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}