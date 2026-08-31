#include<bits/stdc++.h>

using namespace std;

void G2B(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'G')
            s[i] = 'B';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool check = true;
        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[i])
                continue;
            else {
                if (s1[i] == 'G' && s2[i] == 'B')
                    continue;
                else if (s1[i] == 'B' && s2[i] == 'G')
                    continue;
            }
            check = false;
            break;
        }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
