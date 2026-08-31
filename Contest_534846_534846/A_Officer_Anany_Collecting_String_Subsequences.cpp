#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    freopen("collectingofficer.in", "r", stdin);
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n;
        cin >> s;

        vector<int> idx;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A')
                idx.push_back(i);
        }

        int final_answer = INT_MAX;
        for (int i = 0; i < (int)idx.size(); i++) {
            char current_character = 'A';
            int current_answer = 0;
            bool is_valid = false;
            for (int j = idx[i]; j < n; j++) {
                current_answer++;
                if (s[j] == current_character) {
                    current_character = char(current_character + 1);
                }

                // End Case
                if (current_character == char('Z' + 1)) {
                    is_valid = true;
                    break;
                }
            }

            if (is_valid) {
                final_answer = min(final_answer, current_answer);
            }
        }

        cout << final_answer << '\n';
    }
    return 0;
}