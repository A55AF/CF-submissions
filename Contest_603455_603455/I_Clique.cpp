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
    ll n, m, x;
    cin >> n >> m >> x;
    ll y = sum(x);
    if(x <= n && y <= m) {
        n -= x;
        m -= y;
        if(!n && !m) cout << "YES\n";
        else if(m && n <= m + 1) cout << "YES\n";
        else cout << "NO\n";
    } else cout << "NO\n";
}
signed main() {
    FAST;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        tc();
    return 0;
}