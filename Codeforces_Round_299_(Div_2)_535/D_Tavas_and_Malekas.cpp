#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define infl (long long)1e18
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int H = 2, N = 1e6+10;
vector<array<ll,H>> pw(N);
const array<ll,H> base = {31, 37};
const ll mod = 1e9+7;
ll add(ll a, ll b) {
    return (a+b+mod)%mod;
}
ll mul(ll a, ll b) {
    return (a * b) %mod;
}
ll id(char c) {
    return c - 'a' + 1;
}
ll fpow(ll b, ll pw) {
    ll ans = 1;
    while (pw > 0) {
        if (pw % 2 == 1)
            ans = 1LL * mul(ans, b);
        b = mul(b, b);
        pw = pw / 2;
    }
    return ans;
}
ll inverse(ll x, int type) { return fpow(x, mod - 2); }
void precompute() {
    pw[0][0] = pw[0][1] = 1;
    for ( int b = 0 ; b < H ; b++ ) {
        for ( int i = 1 ; i < N ; i++ ) {
            pw[i][b] = mul(pw[i-1][b], base[b]);
        }
    }
}
struct hstring {
    vector<array<ll,H>> hash;
    hstring(const string&s) {
        int n = s.size();
        hash = vector<array<ll,H>>(n+1);
		array<ll,H> cur = {0,0};
        for ( int i = 1 ; i <= n; i++ ) {
			for ( int b = 0 ; b < H; b++ ) {
				cur[b] = mul(cur[b], base[b]);
				cur[b] = add(cur[b], id(s[i-1]));
			}
			hash[i] = cur;
		}
    }
    array<ll,H> range(ll l, ll r) { // 1-Based
        array<ll,H> ans = hash[r];
        for ( int b = 0; b < H ; b++ )
            ans[b] = add(ans[b], -mul(hash[l-1][b], pw[r-l+1][b]));
        return ans;
    }
};
void accepted() {
	ll n, m;
	cin >> n >> m;
	string s;
	cin >> s ;
	set<ll> st;
	for ( int i = 0 ; i < m ; i++ ){
		int x;
		cin >> x;
		st.insert(x);
	}
	hstring p(s);
	string ans;
	ans.resize(n+7, '0');
	for ( int i = 0, idx = s.size(); i < n; i++ ) {
		if ( st.count(i+1) ) {
			idx = 0;
		}
		if ( idx == (int)s.size() ) continue;
		ans[i] = s[idx];
		idx++;
	}
	ll zeros = 0;
	for ( int i = 0; i < n; i++ ) {
		zeros += (ans[i] == '0');
	}
	hstring hs(ans);
	for ( const int&start : st ) {
		int ends = start + s.size() - 1;
		auto hash1 = hs.range(start, ends);
		auto hash2 = p.range(1, s.size());
		if ( hash1 != hash2 ) {
			return void(cout << 0);
		}
	}
	ll ways = 1;
	while ( zeros-- ) {
		ways = mul(ways, 26);
	}
	cout << ways ;
}

signed main() {
    ASSAF;
    int exe = 1;
    precompute();
    // cin >> exe;
    while (exe--)
        accepted();
}
