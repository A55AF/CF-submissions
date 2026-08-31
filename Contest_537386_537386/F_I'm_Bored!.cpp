#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main() {
    fast; //ACCEPTED SNIPERS
    int t; cin >> t;
    while (t--) {
        vector<int> freq(26);
        bool all_one = true;
        int fo = 0;
        for (int& itr : freq) {
            cin >> itr;
            if (itr == 0) continue;

            if (itr != 1) {
                all_one = false;
            }
            else fo++;
        }

        // Corner Case
        if (all_one && fo > 0) {
            cout << 1 << ' ' << fo << '\n';
            continue;
        }

        int mx_length = 0, number = INT_MAX;
        bool one = false;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] >= 2) {
                mx_length += 2;
                number = min(number, freq[i] / 2);
            }
        }

        if (fo > 0) {
            mx_length += 1;
            number = min(number, fo);
        }

        if (number == INT_MAX) number = 0;
        cout << mx_length << ' ' << number << '\n';
    }
    return 0;
}