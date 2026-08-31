#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\


const ll mod = 1e9 + 7;
const int N = 2000;
ll fact[N];
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }
ll sub(ll x, ll y) { return ((x % mod) - (y % mod) + mod) % mod; }
ll mult(ll x, ll y) { return ((x % mod) * (y % mod)) % mod; }
ll fpow(ll b, ll pw){
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
ll inv(ll x) { return fpow(x, mod - 2); }
void factorial(){
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
        fact[i] = mult(fact[i - 1], i);
}
ll divis(ll x, ll y) { return mult(x, inv(y)); }
ll nCr(ll n, ll r){
    if (n < r)
        return 0;
    return divis(fact[n], mult(fact[r], fact[n - r]));
}

void accepted() {
    factorial();
    ll n , k ;
    cin >> n >> k ;
    map<ll,ll,greater<>> mp ;
    for ( int i = 0 ; i < n ; i++ )
    {
        ll x ; cin >> x ;
        mp[x]++;
    }
    ll ans = 1 ;
    for ( auto [num,f] : mp )
    {
        if ( f > k ) { ans = mult(ans,nCr(f,k)); k = 0; break; }
        ans = mult(ans,nCr(f,f));
        k-=f;
    }
    cout << ans ;
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}
