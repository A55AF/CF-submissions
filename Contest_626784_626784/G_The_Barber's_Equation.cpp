#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;
// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
map<ll,ll> frq;
void factors(ll n) {
    for(int i = 2; i * i <= n; i++) {
        while(!(n % i)) {
            n /= i;
            frq[i]++;
        }
    }
    if(n > 1) frq[n]++;
}
void accepted() {
    frq.clear();

    ll a, b;
    cin >> a >> b;
    factors(a);
    factors(b);

    vector<ll> divs = {1};
    for(const auto&[p, c] : frq) {
        vector<ll> mult = {p};
        for(int j = 1; j < c; j++) {
            ll m = mult.back() * p;
            if(m >= a) break;
            mult.push_back(m);
        }

        ll sz = divs.size();
        for(int j = 0; j < sz; j++) {
            for(const auto&m : mult) {
                ll div = divs[j] * m;
                if(div >= a) break;
                divs.push_back(div);
            }
        }
    }
    cout << divs.size() << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
