#include<bits/stdc++.h>

using namespace std;

const int N = 300;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s1, s2;
        int frq1[N] = {0}, frq2[N] = {0};
        cin >> s1 >> s2;
        vector<pair<char, int>> v1, v2;
        for (int i = 0; i < s1.size(); i++) {
            pair<char, int> p;
            p.second = 0;
            if (i == 0)
                p.first = s1[i], p.second++, v1.push_back(p);
            else {
                if (v1[v1.size() - 1].first == s1[i])
                    v1[v1.size() - 1].second++;
                else
                    p.first = s1[i], p.second++, v1.push_back(p);
            }
        }
        for (int i = 0; i < s2.size(); i++) {
            pair<char, int> p;
            p.second = 0;
            if (i == 0)
                p.first = s2[i], p.second++, v2.push_back(p);
            else {
                if (v2[v2.size() - 1].first == s2[i])
                    v2[v2.size() - 1].second++;
                else
                    p.first = s2[i], p.second++, v2.push_back(p);
            }
        }
        if (v1.size() != v2.size())
            cout << "NO\n";
        else {
            bool check = true;
            for (int i = 0; i < v1.size(); i++) {
                if (v1[i].first != v2[i].first || v1[i].second > v2[i].second) {
                    check = false;
                    break;
                }
            }
            if (check)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}