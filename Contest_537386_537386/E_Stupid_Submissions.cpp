#include<bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {
    fast; //ACCEPTED SNIPERS
    int t; cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<char> sz(n + 1);
        for (int i = 1; i <= n; ++i) {
            char input; cin >> input;
            sz[i] = input;
        }

        int current_test = k, answer = 0;
        for (int i = 0; i < m; ++i) {
            char verdict;
            int test;
            cin >> verdict;

            if (verdict == 'A') {
                current_test = n;
            }
            else {
                cin >> test;
                if (test <= current_test && sz[test] == 'S') answer++;

                current_test = max(current_test, test);
            }
        }
        cout << answer << '\n';
    }
    return 0;
}