#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--) {
        string s;
        char x;
        cin >> s >> x;
        if (x == 'W')
            mp[s] += 3;
        else if (x == 'D')
            mp[s] += 1;
        else
            mp[s];
    }
    cout << mp.size() << "\n";
    for (auto it: mp)
        cout << it.first << " " << it.second << "\n";
    return 0;
}