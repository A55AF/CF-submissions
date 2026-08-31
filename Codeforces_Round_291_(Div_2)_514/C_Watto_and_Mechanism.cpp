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
const int H = 2, N = 6e5+7;
vector<array<ll,H>> pw(N), inv(N);
const array<ll,H> base = {29, 31};
const array<ll,H> mod = {(ll)1e9+7, (ll)1e9+9};
ll add(ll a, ll b, int type) {
    return (a+b+mod[type])%mod[type];
}
ll mul(ll a, ll b, int type) {
    return (a * b) %mod[type];
}
ll id(char c) {
    return c - 'a' + 1;
}
ll fpow(ll b, ll pw, ll type)
{
    ll ans = 1;
    while (pw > 0)
    {
        if (pw % 2 == 1)
            ans = 1LL * mul(ans, b, type);
        b = mul(b, b, type);
        pw = pw / 2;
    }
    return ans;
}
ll inverse(ll x, ll type) { return fpow(x, mod[type] - 2, type); }
void precompute() {
    pw[0][0] = pw[0][1] = inv[0][0] = inv[0][1] = 1;
    for ( int b = 0 ; b < H ; b++ ) {
        ll div = inverse(base[b], b);
        for ( int i = 1 ; i < N ; i++ ) {
            pw[i][b] = mul(pw[i-1][b], base[b], b);
            inv[i][b] = mul(inv[i-1][b], div, b);
        }
    }
}
struct hstring {
    vector<vector<ll>> hash;
    hstring(const string&s) {
        int n = s.size();
        hash = vector<vector<ll>>(n+1, vector<ll>(H));
        for ( int b = 0 ; b < H ; b++ ) {
            for ( int i = 1 ; i <= n ; i++ ) {
                hash[i][b] = mul(id(s[i-1]), pw[i][b], b);
                hash[i][b] = add(hash[i][b], hash[i-1][b], b);
            }
        }
    }
    array<ll,H> range(ll l, ll r) { // 1-Based
        array<ll,H> ans;
        for ( int b = 0; b < H ; b++ )
            ans[b] = mul(add(hash[r][b], -hash[l-1][b], b), inv[l-1][b], b);
        return ans;
    }
};
void accepted() {
    int n, m;
    cin >> n >> m ;
    set<array<ll,H>> st;
    for ( int i = 0 ; i < n ; i++ ) {
        string s;
        cin >> s;
        hstring hs(s);
        for ( int idx = 1 ; idx <= s.size() ; idx++ ) {
            for ( int c = 'a'; c <= 'c'; c++ ) {
                if ( c == s[idx-1] ) continue;
                array<ll,H> newHash = {0,0};
                array<ll,H> after = hs.range(idx+1,s.size());
                array<ll,H> before = hs.range(1, idx-1);
                for ( int b = 0 ; b < H ; b++ ) {
                    after[b] = mul(after[b], pw[idx][b], b);
                    newHash[b] = add(before[b], add(mul(id(c), pw[idx][b], b), after[b], b), b);
                }
                st.insert(newHash);
            }
        }
    }

    while ( m-- ) {
        string s;
        cin >> s ;
        hstring hs(s);
        if ( st.count(hs.range(1,s.size()))) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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