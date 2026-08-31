#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    vector<int> v(4);
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        bool diff = true;
        for (int j = i + 1; j < 4; j++) {
            if (v[i] == v[j]) {
                diff = false;
                break;
            }
        }
        if (!diff) ans++;
    }
    cout << ans ;
    return 0;
}