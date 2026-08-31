#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define imie(x) " [" << #x << " = " << (x) << "] "
typedef long long ll;
using namespace std;
void tc() {
    ll n;
    cin >> n;
    n--;
    ll a = 1;
    ll ans = 0;
    while (a * a <= n) {
        ll b = n / a;
        ll all = max(0ll, b - a);
        ans += 2 * all + 1;
        a++;
    }
    cout << ans << '\n';
}
signed main() {
    FAST;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        tc();
    return 0;
}
