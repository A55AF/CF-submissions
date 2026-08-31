#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define imie(x) " [" << #x << " = " << (x) << "] "
typedef long long ll;
using namespace std;
void tc() {
    ll n, j, h;
    cin >> n >> j >> h;
    vector<ll> tmp(n+1), v(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> tmp[i];
    }
    v[1] = tmp[1];
    for(int i = 2; i <= n; i++) {
        v[i] = tmp[i] - tmp[i-1];
        v[i] = max(v[i], 0ll);
    }
    int l = 0, r = n;
    int ans = 0;
    while(l <= r) {
        int mid = (l + r) / 2;
        multiset<ll, greater<ll>> st;
        for(int i = 1 ; i <= mid; i++) {
            if(!v[i]) continue;
            st.insert(v[i]);
        }
        ll H = 0, J = j;
        for(const auto&i : st) {
            if (J >= 1) J--;
            else H += i;
        }
        if(H > h) {
            r = mid - 1;
        } else {
            ans = max(ans, mid);
            l = mid + 1;
        }
    }
    cout << ans ;
}
signed main() {
    FAST;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        tc();
    return 0;
}
