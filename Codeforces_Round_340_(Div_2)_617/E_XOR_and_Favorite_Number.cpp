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
const int N = 2e6+7, SQ = 1420;
ll a[N];
struct Query {
    int l, r, i;
    bool operator<(const Query&oth) const {
        if (l/SQ == oth.l/SQ) return r < oth.r;
        return l/SQ < oth.l/SQ;
    }
};
vector<ll> mo(vector<Query>&queries, ll k) {
    vector<ll> output(queries.size());
    sort(all(queries));
    ll frq[N]{};
    ll ans = 0;
    auto add = [&](ll idx) {
        ans += frq[k^a[idx]];
        frq[a[idx]]++;
    };
    auto remove = [&](ll idx) {
        frq[a[idx]]--;
        ans -= frq[k^a[idx]];
    };

    ll L = 0, R = -1;
    for (const auto&[l, r, i] : queries) {
        while (R < r) add(++R);
        while (L > l) add(--L);
        while (R > r) remove(R--);
        while (L < l) remove(L++);
        output[i] = ans;
    }
    return output;
}
void accepted() {
    ll n, m, k;
    cin >> n >> m >> k;
    for (int i = 1 ; i <= n ; i++ )
        cin >> a[i], a[i] ^= a[i-1];
    vector<Query> queries;
    for (int i = 0 ; i < m ; i++ ) {
        int l, r;
        cin >> l >> r ;
        l--;
        queries.push_back({l, r, i});
    }
    auto ans = mo(queries, k);
    for (const auto&i : ans)
        cout << i << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}