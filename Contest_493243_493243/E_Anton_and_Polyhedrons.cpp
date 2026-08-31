#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
            m[s] += 4;
        else if (s == "Cube")
            m[s] += 6;
        else if (s == "Octahedron")
            m[s] += 8;
        else if (s == "Dodecahedron")
            m[s] += 12;
        else
            m[s] += 20;
    }
    int sum = 0;
    for (auto it: m) {
        sum += it.second;
    }
    cout << sum;
    return 0;
}