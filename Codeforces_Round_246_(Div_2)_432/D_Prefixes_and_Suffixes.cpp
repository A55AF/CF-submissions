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
const int H = 2, N = 1e5 + 7;
vector<array<ll,H>> pw(N), inv(N);
array<ll,H> base = {29, 31};
array<ll,H> mod = {(ll)1e9 + 7, (ll)1e9 + 9};
ll add(ll a, ll b, ll type) { return (a + b + mod[type]) % mod[type]; }
ll mul(ll a, ll b, ll type) { return (a * b) % mod[type]; }
ll id(char c) { return c - 'a' + 1; }
ll fpow(ll b, ll pw, ll type) {
    ll ans = 1;
    while ( pw > 0 ) {
        if (pw&1)
            ans = 1ll * mul(ans, b, type);
        b = mul(b, b, type) ;
        pw /= 2;
    }
    return ans;
}
ll inverse(ll x, ll type ) { return fpow(x, mod[type] - 2, type); }
void precompute() {
    pw[0][0] = pw[0][1] = inv[0][0] = inv[0][1] = 1;
    for ( int b = 0 ; b < H ; b++ ) {
        ll div = inverse(base[b], b);
        for ( int i = 1; i < N ; i++ ) {
            pw[i][b] = mul(pw[i-1][b], base[b],b);
            inv[i][b] = mul(inv[i-1][b], div, b);
        }
    }
}
struct hstring {
    vector<array<ll,H>> hash;
    hstring(const string&s) {
        int n = s.size();
        hash = vector<array<ll,H>>(n+1);
        for ( int b = 0 ; b < H ; b++ ) {
            for ( int i = 1 ; i <= n ; i++ ) {
                hash[i][b] = mul(id(s[i-1]), pw[i][b], b);
                hash[i][b] = add(hash[i][b], hash[i-1][b], b);
            }
        }
    }
    array<ll,H> range(ll l, ll r) {
        array<ll,H> ans;
        for ( int b = 0 ; b < H ; b++ )
            ans[b] = mul(add(hash[r][b], -hash[l-1][b], b), inv[l-1][b], b);
        return ans;
    }
};
void accepted() {
    string s;
    cin >> s ;
    int n = s.size();
    hstring hs(s) ;
    vector<bool> valid(n+1);
    int sz = 0;
    for ( int i = 1 ; i <= s.size(); i++ ) {
        if ( hs.range(1, i) == hs.range(n-i+1, n)) {
            sz++;
            valid[i] = true;
        }
    }
    vector<int> ans(n+1);
    for ( int i = 1 ; i <= n ; i++ ) {
        int l = i , r = n, cur = 0;
        while ( l <= r ) {
            int mid = ( l + r ) / 2;
            if ( hs.range(1, mid - i + 1) == hs.range(i, mid) ) {
                cur = mid - i + 1;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (cur) ans[cur]++;
    }

    for ( int i = n-1 ; i >= 1 ; i-- )
        ans[i] += ans[i+1];
    cout << sz << '\n' ;
    for ( int i = 1 ; i <= n ; i++ ) {
        if ( valid[i] ) cout << i << ' ' << ans[i] << '\n' ;
    }
}

signed main() {
    ASSAF;
    precompute();
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}