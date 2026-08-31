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
        map<char, int> m;
        int problem = 0;
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }
        for (auto it: m) {
            if (it.first - 'A' + 1 <= it.second)
                problem++;
        }
        cout << problem << "\n";
    }
    return 0;
}