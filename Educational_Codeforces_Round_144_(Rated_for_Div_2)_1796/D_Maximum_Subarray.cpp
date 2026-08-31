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
ll n, k, x;
vector<ll> v;
const int N = 2e5 + 7, K = 21;
const ll start = -2e18;
ll dp[N][K][3];
ll solve(int idx = 0, int op = k, int type = 0) {
	if ( idx == n ) {
		if ( op ) return -1e18;
		return 0;
	}
	
	ll &ans = dp[idx][op][type];
	if ( ans != start ) return ans;
	if ( type == 0 ) {
		ans = max(ans, solve(idx+1, op, 0)); 
		if ( op ) 
			ans = max(ans, solve(idx+1, op-1, 0));
		ans = max(ans, solve(idx, op, 1));
	} else if ( type == 1 ) {
		ans = max(ans, solve(idx+1, op, 1) + (v[idx] - x));
		if ( op ) 
			ans = max(ans, solve(idx+1, op-1, 1) + (v[idx] + x));
		ans = max(ans, solve(idx, op, 2));
	} else {
		ans = max(ans, solve(idx+1, op, 2));
		if ( op )
			ans = max(ans, solve(idx+1, op-1, 2));
	}
	return ans;
}
void accepted() {
	cin >> n >> k >> x;
	for ( int i = 0 ; i < n ; i++ ) 
		for ( int j = 0 ; j <= k ; j++ ) 
			for ( int t = 0 ; t < 3 ; t++ ) 
				dp[i][j][t] = start;
	
	v.resize(n);
	for ( int i = 0 ; i < n ; i++ ) 
		cin >> v[i] ;
	
	cout << solve() << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
