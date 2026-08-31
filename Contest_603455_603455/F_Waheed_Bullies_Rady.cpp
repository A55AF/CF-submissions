#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define imie(x) " [" << #x << " = " << (x) << "] "
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
ll mul(ll a, ll b) {
    return (a * b) % mod;
}
ll fpow(ll b, ll pw)
{
    ll ans = 1;
    while (pw > 0)
    {
        if (pw % 2 == 1)
            ans = 1LL * mul(ans, b);
        b = mul(b, b);
        pw = pw / 2;
    }
    return ans;
}
void tc() {
    ll n;
    cin >> n;
    for(int i = 0; i < n-1; i++) {
        int x, y;
        cin >> x >> y;
    }
    cout << fpow(2, n - 1) << '\n';
}
signed main() {
    FAST;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        tc();
    return 0;
}
