#include<bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {
    fast; //ACCEPTED SNIPERS
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < (int)s.size(); ++i) {
        s[i] = tolower(s[i]);
    }

    int freq[26]{};
    for (int i = 0; i <(int)s.size(); ++i) {
        freq[s[i] - 'a']++;
    }

    bool is_valid = true;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] == 0) {
            is_valid = false;
            break;
        }
    }
    cout << ((is_valid) ? "YES\n" : "NO\n");
    return 0;
}