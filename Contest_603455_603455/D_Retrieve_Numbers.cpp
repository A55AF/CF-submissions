#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

ll n, x, y;
string to_bin(ll num) {
    string ans;
    while(num > 0) {
        ans.push_back((num%2) + '0');
        num /= 2;
    }
    while(ans.size() < y) {
        ans.push_back('0');
    }
    reverse(all(ans));
    return ans;
}
void tc() {
    cin >> n >> x >> y;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<ll> ans;
    ll cur = 0;
    int idx = x - 1;
    for(int i = 0; i < n; i++) {
        string s = to_bin(v[i]);
        for(int j = 0; j < y; j++) {
            if(idx == x - 1 && i == n-1 && y - j < x) {
                idx -= (y - j - 1);
            }
            cur += (1ll << idx) * (s[j] == '1');
            if(!idx) {
                ans.push_back(cur);
                cur = 0;
            }
            idx--;
            if(idx < 0) idx += x;
            idx %= x;
        }
    }
    if(cur) ans.push_back(cur);
    cout << ans.size() << '\n';
    for(const auto&i : ans) {
        cout << i << ' ';
    }
    cout << '\n';
}
signed main() {
    FAST;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        tc();
    return 0;
}
