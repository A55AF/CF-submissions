#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n;
    cin >> n;
    ll cycle = n/4, rem = n%4;
    ll ans = cycle * 3 + rem;
    cout << ans;
}
