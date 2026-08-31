#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n ;
        vector<ll> v(n), frq(n+1);
        for (int i = 0 ; i < n ; i++)
            cin >> v[i], frq[v[i]]++;
        ll ans = 0;
        for (int i = 0 ; i < n ; i++) {
            ll a = v[i];
            for (int j = 1; j * j <= a; j++) {
                if (a%j) continue;

                ll b = a - j;
                if (b > 0 && __gcd(a, b) == (a ^ b))
                    ans += frq[b];

                b = a - (a / j);
                if (b > 0 && __gcd(a, b) == (a ^ b))
                    ans += frq[b];
            }
        }
        cout << ans << '\n';
    }
}