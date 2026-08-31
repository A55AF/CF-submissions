#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define int ll

const int mod = 1e9 + 7;

ll Take_mod(ll a, ll b){
    return (((a % mod * b % mod) % mod) + mod) % mod;
}

ll fast_power(ll a, ll b){
    if (b < 0) return 0;
    ll res = 1;
    while (b){
        if (b & 1) res = Take_mod(res, a);
        a = Take_mod(a, a);
        b >>= 1;
    }
    return res;
}

ll Modulo_Inverse(ll a){
    return fast_power(a, mod - 2);
}

ll geometry_summation(ll first, ll ratio, int number_of_element){
    return Take_mod(Take_mod(first , (1 - fast_power(ratio, number_of_element))) , Modulo_Inverse(1 - ratio));
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n, s, m;      cin >> n >> s >> m;
        if (n % 2 == 1) {
            cout << geometry_summation(1, 2, s) << "\n";
            continue;
        }
        ll x = min((s - m) * (n), s);
        ll ans = geometry_summation(1, 2, s) - geometry_summation(1, 2, (s - x));
        ans += mod;
        ans %= mod;
        cout << ans << "\n";
    }
}
