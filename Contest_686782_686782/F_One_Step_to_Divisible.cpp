#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n, k;
    cin >> n >> k;
    ll ans = min(n%k, k - (n%k));
    cout << ans;
}
