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
map<int,int> comp;
const int H = 2, N = 1e5+7;
vector<array<ll,H>> pw(N);
const array<ll,H> base = {(ll)1e5+7, (ll)1e5+9};
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
    hstring(vector<int>&v) {
        int n = v.size() - 1;
        hash = vector<array<ll,H>>(n+1);
		array<ll,H> cur = {0,0};
        for ( int i = 1 ; i <= n; i++ ) {
			for ( int b = 0 ; b < H; b++ ) {
				cur[b] = mul(cur[b], base[b]);
				cur[b] = add(cur[b], v[i]);
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
int start = 1;
void accepted() {
	int n;
	cin >> n ;
	vector<int> v(n+1), orig(n+1);
	map<int,vector<int>> idx;
	for ( int i = 1 ; i <= n ; i++ ) 
		cin >> v[i] , orig[i] = v[i], comp[v[i]] = 0;
	
	for ( auto&[f, s] : comp ) {
		s = start;
		start++;
	}
	
	for ( int i = 1 ; i <= n ; i++ ) 
		v[i] = comp[v[i]], idx[v[i]].push_back(i);
	
	hstring hs(v);
	set<pair<int,int>> valid;
	for ( int i = 1 ; i <= n ; i++ ) {
		for ( const auto&j : idx[v[i]] ) { // right side
			int sz = j - i;
			if ( j <= i ) continue;
			if ( j + sz - 1 > n || i + sz - 1 > n ) break;
			if ( hs.range(i, i + sz - 1) == hs.range(j, j + sz - 1) ) {
				valid.insert({sz, i});
				break;
			}
		}
	}
	int ans = 1;
	for ( const auto&[sz, idx] : valid ) {
		if ( idx >= ans ) 
			ans = sz + idx;
	}
	cout << n - ans + 1 << '\n' ;
	for ( int i = ans; i <= n ;i++ ) 
		cout << orig[i] << ' ' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    precompute();
    // cin >> exe;
    while (exe--)
        accepted();
}
