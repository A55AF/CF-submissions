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
const int N = 1e5+7;
const ll mod = 1e9 + 7;
vector<int> spf(N);
void SPF() {
    iota(all(spf),0);

    for ( int i = 2 ; i * i < N ; i++ ) {
        if ( spf[i] != i ) continue;
        for ( int j = i * i ; j < N ; j+=i ) {
            spf[j] = min(spf[j],i);
        }
    }
}
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
ll inv(ll x) { return fpow(x, mod - 2); }
ll divis(ll x, ll y) { return mult(x, inv(y)); }
void accepted(){
    int n;
    cin >> n ;
    int arr[n] ;
    vector<ll> primes(N);
    ll ans = 1;
    for ( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;

    for ( int i = 0 ; i < n ; i++ ) {
        int cur = arr[i];
        while ( cur > 1 ) {
            primes[spf[cur]]++;
            cur /= spf[cur];
        }
    }

    for ( int i = 2 ; i < N ; i++ ) {
        ans = mult(ans,primes[i]+1);
    }

    int q;
    cin >> q ;
    while ( q-- ) {
        int idx, x;
        cin >> idx >> x ;
        idx--;


        int cur = arr[idx];
        int last = spf[cur];
        ans = divis(ans,primes[last]+1);
        while ( cur > 1 ) {
            if ( last != spf[cur] ) {
                ans = mult(ans, primes[last]+1);
                ans = divis(ans,primes[spf[cur]]+1);
                last = spf[cur];
            }
            primes[spf[cur]]--;
            cur /= spf[cur];
        }
        ans = mult(ans,primes[last]+1);

        cur = x;
        arr[idx] = x;
        last = spf[cur];
        ans = divis(ans,primes[last]+1);
        while ( cur > 1 ) {
            if ( last != spf[cur] ) {
                ans = mult(ans,primes[last]+1);
                ans = divis(ans,primes[spf[cur]]+1);
                last = spf[cur];
            }
            primes[spf[cur]]++;
            cur /= spf[cur];
        }
        ans = mult(ans,primes[last]+1);

        cout << ans << '\n' ;
    }
}

signed main() {
    ASSAF;
    SPF();
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}