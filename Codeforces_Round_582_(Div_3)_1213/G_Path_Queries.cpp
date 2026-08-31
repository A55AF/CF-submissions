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
const int N = 2e5+7;
vector<ll> par(N), sz(N);
ll root(ll x) {
    return x == par[x] ? x : root(par[x]);
}
bool connected(ll x, ll y) {
    return root(x) == root(y);
}
void connect(ll x, ll y) {
    x = root(x);
    y = root(y);
    if ( sz[x] >= sz[y] )
        swap(x, y);
    par[x] = y;
    sz[y] += sz[x];
}
void accepted() {
    ll n, q;
    cin >> n >> q;
    for (int i = 0 ; i <= n ; i++ )
        par[i] = i, sz[i] = 1;
    vector<tuple<ll,ll,ll>> v;
    vector<pair<ll,ll>> queries(q);
    for ( int i = 0 ; i < n-1; i++ ) {
        ll x, y, c;
        cin >> x >> y >> c;
        v.push_back({c, x, y});
    }
    for (int i = 0 ; i < q ; i++ )
        cin >> queries[i].first, queries[i].second = i;
    sort(all(queries));
    sort(all(v));
    ll idx = 0, cur = 0;
    vector<ll> ans(q+1);
    for ( int i = 0 ; i < q ; i++ ) {
        ll limit = queries[i].first;
        while ( idx < n-1 && get<0>(v[idx]) <= limit ) {
            auto [c, x, y] = v[idx];
            if ( !connected(x, y) ) {
                cur += sz[root(x)] * sz[root(y)];
                connect(x, y);
            }
            idx++;
        }
        ans[queries[i].second] = cur;
    }
    for ( int i = 0 ; i < q ; i++ ) {
        cout << ans[i] << ' ' ;
    }
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
