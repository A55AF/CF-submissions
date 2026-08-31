#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    freopen("lis.in", "r", stdin);
    string s;
    cin >> s;
    ll sum = 0;
    for (ll i = 0; i < (ll)s.size(); i++) {
        sum += (s[i] - '0');
    }

    ll tmp = (s[0] - '0') - 1;
    tmp += ((ll)s.size() - 1) * 9LL;

    cout << max(tmp, sum) << '\n';
    return 0;
}