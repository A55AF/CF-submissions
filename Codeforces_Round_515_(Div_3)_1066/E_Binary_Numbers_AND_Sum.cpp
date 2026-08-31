#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for (auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const ll mod = 998244353;
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }
ll sub(ll x, ll y) { return ((x % mod) - (y % mod) + mod) % mod; }
ll mult(ll x, ll y) { return ((x % mod) * (y % mod)) % mod; }
ll fpow(ll b, ll pw)
{
    ll ans = 1;
    while (pw > 0)
    {
        if (pw % 2 == 1)
            ans = 1LL * mult(ans, b);
        b = mult(b, b);
        pw = pw / 2;
    }
    return ans;
}
void accepted() {
    ll n,m;cin>>n>>m;
    string a,b;cin>>a>>b;
    reverse(all(a)),reverse(all(b));
    if ( sz(a) < sz(b) ) {
        for( int i = 0 ; i < abs(n-m) ; i++ ) a.pb('0');
    }else {
        for( int i = 0 ; i < abs(n-m) ; i++ ) b.pb('0');
    }
    n=max(n,m);
    m=max(n,m);
    ll sfx[m]{};
    for( int i = m-1 ; i > -1 ; i-- ) {
        if(b[i]=='1') sfx[i]++;
        if ( i == m-1 ) continue;
        sfx[i] += sfx[i+1];
    }
    ll ans = 0 ;
    for( int i = 0 ; i < n ; i++ ) {
        if ( a[i] == '1' ) ans = add(ans,mult(fpow(2,i*1LL),sfx[i]));
    }
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--){
        accepted();
        // cout << "\n" ;
    }
    return 0;
}