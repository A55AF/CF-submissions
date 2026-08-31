#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) (ll)v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define prll(x) for ( auto it : x ){ cout << it << " ";} cout << '\n';
#define inf 1e9
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
ll n , ans;
const ll N = 2e5 + 7;
vector<ll> gr[N],col(N),sum(N);

ll calc(ll node , ll par ) {
    if ( !col[node] ) sum[node]++;
    for ( const ll&ch : gr[node] ) {
        if ( par == ch ) continue;

        sum[node] += calc(ch,node);
    }
    return sum[node];
}


void dfs(ll node , ll par ) {
    if (par != -1 && col[par] == 2 && col[node] != 1 ) {
        ans += sum[1] - sum[node] ;
    }
    for ( const ll& ch : gr[node] ) {
        if ( par == ch ) continue;

        dfs(ch,node);
        if ( col[ch] == 2  && col[node] != 1 ) ans += sum[ch];
    }
}

void accepted() {
    cin >> n ;
    for ( ll i = 1 ; i <= n ; i++ ) gr[i].clear(),col[i] = sum[i] = 0;

    for ( ll i = 0 ; i < n -1 ; i++ ) {
        ll x , y ;
        cin >> x >> y ;
        gr[x].pb(y);
        gr[y].pb(x);
    }
    ans = 0;

    ll leaf = 0;
    for ( ll i = 1 ; i <= n ; i++ ) {
        if ( SZ(gr[i]) == 1 ) leaf++;
    }
    // cout << leaf ;
    for ( ll i = 1 ; i <= n ; i++ ) {
        bool win = false;
        for ( const ll& ch : gr[i] )
            if ( SZ(gr[ch]) == 1 ) col[ch] = 1 , win = true;
        if ( win && !col[i] ) col[i] = 2 ;
    }
    calc(1,-1);
    dfs(1,-1);
    cout << ans + (n-leaf)*leaf ;
}

signed main() {
    ll exe = 1;
    ASSAF;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}