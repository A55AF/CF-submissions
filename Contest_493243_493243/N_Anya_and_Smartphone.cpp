#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    long long g = 0;
    cin >> n >> m >> k;
    map<int, int> map1;
    vector<int> app;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        map1[x] = i;
        app.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        g += ((map1.find(x)->second) / k) + 1;
        if ((map1.find(x)->second) != 0) {
            swap(app[map1.find(x)->second], app[(map1.find(x)->second) - 1]);
            map1[x] -= 1;
            map1[map1.find(app[map1.find(x)->second + 1])->first] += 1;
        }
    }
    cout << g;
    return 0;
}