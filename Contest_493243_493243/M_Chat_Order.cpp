#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<string> dq;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        dq.push_front(s);
    }
    map<string, int> m;
    for (int i = 0; i < dq.size(); i++) {
        if (m[dq[i]] == 0)
            m[dq[i]]++;
        else
            dq[i] = "null";
    }
    for (auto it: dq) {
        if (it == "null")
            continue;
        cout << it << "\n";
    }
    return 0;
}