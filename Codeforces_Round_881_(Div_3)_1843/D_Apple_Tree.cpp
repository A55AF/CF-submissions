#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 2e5+8;
vector<vector<ll>> gr;
vector<ll> ans;
vector<bool> vis;
ll dfs(ll node = 1) {
    vis[node] = true;
    int child = 0 , leaf = 0;
    for ( const ll&ch : gr[node] ) {
        if (!vis[ch]) {
            vis[ch] = true;
            ans[node] += dfs(ch);
            child++;
        }
    }
    if (!child) return 1LL;
    return ans[node];
}
void accepted() {
    ll n;
    cin >> n ;
    gr.clear();
    ans.clear();
    vis.clear();
    gr.resize(n+1);
    ans.resize(n+1);
    vis.resize(n+1);
    for ( int i = 0; i < n-1 ; i++ ) {
        ll x , y ;
        cin >> x >> y ;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    dfs();
    ll q;cin >> q;
    while ( q-- ) {
        ll a , b ;
        cin >> a >> b;
        ll res = max(ans[a],1LL) * max(ans[b],1LL);
        cout << res << '\n' ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}
