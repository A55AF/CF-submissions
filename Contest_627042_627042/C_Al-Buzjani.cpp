#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod = 1e9 + 7;
const int N = 1e6 + 7;
ll fact[N];
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }
ll sub(ll x, ll y) { return ((x % mod) - (y % mod) + mod) % mod; }
ll mult(ll x, ll y) { return ((x % mod) * (y % mod)) % mod; }
void factorial()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
        fact[i] = mult(fact[i - 1], i);
}
ll sum(ll n) {
    return (n * (n + 1)) / 2;
}
signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    factorial();
    int t;
    cin >> t ;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ans;
        if (!k) k++;
        if (k >= n) ans = 0;
        else {
            ans = mult(sum(n - k), fact[n-1]);
        }
        cout << ans << '\n';
    }
}
