#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = s.size() - 1;
        while (s.size() != 0) {
            if ((s[l] - '0') + (s[r] - '0') == 1)
                s.pop_back(), s.erase(l, 1);
            else
                break;
            r = s.size() - 1;
        }
        cout << s.size() << '\n';
    }
    return 0;
}