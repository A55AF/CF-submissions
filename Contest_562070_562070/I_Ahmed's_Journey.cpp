#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
#define infl (long long)1e18
using namespace std;
// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    ll n, m;
    cin >> n >> m;
    ll s, e;
    cin >> s >> e;
    vector<tuple<ll,ll,ll>> gr[n+1];
    vector<ll> bu;
    for(int i = 0; i < m; i++) {
        ll x, y, b, d;
        cin >> x >> y >> b >> d;
        bu.push_back(b);
        gr[x].push_back({y, b, d});
        gr[y].push_back({x, b, d});
    }
    sort(all(bu));
    ll l = 0, r = bu.size() - 1;
    ll beauty = 0;
    while(l <= r) {
        ll mid = (l + r) / 2;
        ll mx_beauty = bu[mid];
        queue<pair<ll,ll>> q;
        vector<bool> vis(n+1);
        q.push({s, infl});
        vis[s] = 1;
        while(!q.empty()) {
            auto [node, b] = q.front();
            q.pop();
            for(const auto&[ch, ch_b, _] : gr[node]) {
                ll new_b = min(ch_b, b);
                if(!vis[ch] && new_b >= mx_beauty) {
                    q.push({ch, ch_b});
                    vis[ch] = 1;
                }
            }
        }

        if(vis[e]) {
            beauty = max(beauty, mx_beauty);
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    priority_queue<pair<ll,ll>> pq;
    vector<ll> dis(n+1, infl);
    pq.push({0, s});
    dis[s] = 0;
    while (!pq.empty()) {
        auto [d, node] = pq.top();
        d *= -1;
        pq.pop();
        if (d > dis[node]) continue;
        for (const auto&[ch, ch_b, ch_d] : gr[node]) {
            if (ch_b < beauty) continue;

            ll new_d = dis[node] + ch_d;
            if (dis[ch] > new_d) {
                dis[ch] = new_d;
                pq.push({-new_d, ch});
            }
        }
    }
    cout << beauty << ' ' << dis[e] ;
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}