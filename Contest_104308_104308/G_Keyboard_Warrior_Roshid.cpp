#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    char key[] = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    while (t--) {
        string s;
        cin >> s;
        for (auto c: s) {
            bool flag = false;
            for (int i = 0; i < 7; i++) {
                if (c == key[i]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) cout << c;
        }
        cout << "\n";
    }
}
