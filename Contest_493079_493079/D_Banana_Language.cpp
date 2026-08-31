#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        int upper = 0;
        cin >> s;
        int sz = s.size();
        for (int i = 0; i < sz; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                upper++;
        }
        cout << min(upper, sz - upper) << "\n";
    }
    return 0;
}