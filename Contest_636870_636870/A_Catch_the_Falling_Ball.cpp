#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll y;
        cin >> y;
        cout << ((y%10 == 5) ? "YES":"NO") << '\n';
    }
    return 0;
}