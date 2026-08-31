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
ll n, m;
const int N = 19;
vector<set<ll>> gr;
ll dp[N][1<<N];
ll dfs(ll node, ll start,ll par, ll elonMask )  {
    ll &ans = dp[node][elonMask];
    if (~ans) return ans;
    ans = 0;
    for ( const auto&ch : gr[node] ) {
        if ( ch == par ) continue;
        if ( ch == start ) ans++;
        if ( (elonMask >> ch) & 1 ) continue;
        ans += dfs(ch,start,node,elonMask|(1<<ch));
    }
    return ans;
}
void accepted() {
    memset(dp, -1, sizeof dp);
    cin >> n >> m;
    gr.resize(n+1);
    for ( int i = 0 ; i < m ; i++ ) {
        ll x,y;
        cin >> x >> y;
        x--, y--;
        gr[x].insert(y);
        gr[y].insert(x);
    }
    ll ans = 0;
    for ( int i = 0; i < n ; i++ ) {
        ans += dfs(i,i,-1,1<<i);
        for ( int j = i + 1 ; j < n ; j++ ) {
            gr[j].erase(i);
        }
    }
    ans /= 2;
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}