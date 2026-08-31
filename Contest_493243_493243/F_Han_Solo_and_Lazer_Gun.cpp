#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    vector<pair<double, double>> xy;
    set<double> m;
    for (int i = 0; i < n; i++) {
        pair<double, double> p;
        cin >> p.first;
        cin >> p.second;
        if (x == p.first)
            m.insert(-1e6);
        else {
            double z = (y - p.second) / (x - p.first);
            m.insert(z);
        }
        xy.push_back(p);
    }
    cout << m.size();
    return 0;
}