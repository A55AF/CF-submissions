#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;
ll sum(ll num) {
    return (num * (num - 1)) / 2;
}
void tc() {
    ll n;
    cin >> n;
    vector<ll> a(n), prfx(n);
    map<ll,ll> frq;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        prfx[i] ^= a[i];
        if(i) prfx[i] ^= prfx[i - 1];
        frq[prfx[i]]++;
    }
    frq[0]++;
    ll ans = 0;
    for(const auto&[num,f] : frq) {
        ans += sum(f);
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
