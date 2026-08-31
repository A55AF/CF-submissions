#include<bits/stdc++.h>
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
ll mul(ll a, ll b) { return (a * b)%mod; }
ll add(ll a, ll b) { return (a + b + mod)%mod; }
ll fpow(ll b, ll pw) {
    ll ans = 1;
    while ( pw > 0 ) {
        if (pw&1)
            ans = 1ll * mul(ans, b);
        b = mul(b, b);
        pw /= 2;
    }
    return ans;
}
ll inv(ll b) { return fpow(b, mod - 2); }
ll division(ll a, ll b) { return mul(a, inv(b));}
ll sum(ll n) {
    ll ans = division(mul(n, add(n,1)), 2);
    ans = add(ans, -1);
    return ans;
}
int main() {
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin >> t ;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll val1 = sum(n+1);
        ll ans = 1;
        ans = add(ans,add(k, mul(add(k,1), val1)));
        cout << ans << '\n' ;
    }
}