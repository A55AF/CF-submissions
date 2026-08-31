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
ll n;
const ll N = 1e5+7;
set<pair<ll,ll>> st[N];
vector<ll> gr[N];
ll mx_frq[N], sum[N];
ll color[N], ans[N];
void dfs(ll node, ll par) {
    st[node].insert({color[node], 1});
    sum[node] = color[node];
    mx_frq[node] = 1;

    for (const auto&ch : gr[node]) {
        if ( ch == par ) continue;
        dfs(ch, node);
    }
    ans[node] = sum[node];
    if ( par == -1 ) return;
    if (st[node].size() > st[par].size()) {
        swap(st[node], st[par]);
        swap(mx_frq[node], mx_frq[par]);
        swap(sum[node], sum[par]);
    }

    for(auto [col,frq] : st[node]) {
        auto it = st[par].upper_bound({col, -1});
        if ( it != st[par].end() && it->first == col) {
            frq += it->second;
            st[par].erase(it);
        }

        st[par].insert({col, frq});
        if (mx_frq[par] < frq) {
            sum[par] = col;
            mx_frq[par] = frq;
        } else if (mx_frq[par] == frq) {
            sum[par] += col;
        }
    }
}
void accepted() {
    cin >> n;
    for ( int i = 1 ; i <= n ; i++ )
        cin >> color[i] ;
    for ( int i = 0 ; i < n-1; i++ ) {
        ll x, y;
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    dfs(1, -1);
    for ( int i = 1 ; i <= n; i++ ) {
        cout << ans[i] << ' ';
    }
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
