#include<bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {
    fast; //ACCEPTED SNIPERS
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string a, b;
        cin >> a >> b;

        deque<char> ch;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i])
                ch.push_back(b[i]);
        }
        if ((int)ch.size() == 0) {
            cout << "YES\n";
            continue;
        }

        // Cyclic Shift
        char tmp = ch.back();
        ch.pop_back();
        ch.push_front(tmp);

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                b[i] = ch.front();
                ch.pop_front();
            }
        }

        bool is_valid = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                is_valid = false;
                break;
            }
        }

        cout << ((is_valid) ? "YES\n" : "NO\n");
    }
    return 0;
}