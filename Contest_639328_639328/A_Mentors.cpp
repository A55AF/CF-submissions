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
const ll mod = 998244353;
const int N = 2e5 + 7;
int fact[N];
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
void factorial()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
        fact[i] = mult(fact[i - 1], i);
}
void accepted() {
    ll n , k ;
    cin >> n >> k ;
    ll pairs = n/2;
    ll ans = mult(fact[n], fpow(k*(k-1),pairs)) ;
    if (n&1) ans = mult(ans,k);
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    factorial();
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}