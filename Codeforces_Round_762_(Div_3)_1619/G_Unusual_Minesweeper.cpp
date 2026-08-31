#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define infl (long long)1e18
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    ll n , k;
    cin >> n >> k ;
    map<pair<ll,ll>,vector<pair<ll,ll>>> gr;
    map<pair<ll,ll>,ll> time;
    map<ll,set<ll>> left , right ;
    for ( int i = 0 ; i < n ; i++ ) {
        ll x , y , t ;
        cin >> x >> y >> t ;
        time[{x,y}] = t;
        left[x].insert(y);
        right[y].insert(x);
    }
    for ( const auto&[x,s]:left) {
        for ( auto i = s.begin() ; i != s.end() ; i++ ) {
            auto y1 = i,y2 = next(i);
            if ( y2 != s.end() && abs(*y1-*y2) <= k ) {
                gr[{x,*y1}].push_back({x,*y2});
                gr[{x,*y2}].push_back({x,*y1});
            }
        }
    }
    for ( const auto&[y,s] : right ) {
        for ( auto i = s.begin() ; i != s.end() ; i++ ) {
            auto x1 = i , x2 = next(i);
            if ( x2 != s.end() && abs(*x1-*x2) <= k ) {
                gr[{*x1,y}].push_back({*x2,y});
                gr[{*x2,y}].push_back({*x1,y});
            }
        }
    }
    map<pair<ll,ll>,bool> vis;
    multiset<ll,greater<>> comp;
    for ( const auto&[node,t]:time) {
        if ( vis[{node.F,node.S}] ) continue;
        queue<pair<ll,ll>> q;
        q.push({node.F,node.S});
        ll mn = t;
        while ( SZ(q) ) {
            pair<ll,ll> cur_node = q.front();
            vis[{cur_node.F,cur_node.S}] = 1;
            mn = min(mn,time[{cur_node.F,cur_node.S}]);
            q.pop();
            for ( const auto&[f,s]:gr[cur_node]) {
                if (!vis[{f,s}]) q.push({f,s});
            }
        }
        comp.insert(mn);
    }
    ll ans = 0;
    while (SZ(comp)) {
        if ( comp.find(ans) != comp.end() ) comp.erase(ans);
        if ( SZ(comp) ) comp.erase(comp.begin());
        ans++;
    }
    cout << ans-1 << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}