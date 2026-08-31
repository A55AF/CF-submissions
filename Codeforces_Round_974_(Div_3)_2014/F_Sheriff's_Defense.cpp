#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  AhmedPlusPlus
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 2e5+7;
const ll start = -1e18;
ll n, c;
vector<ll> v;
vector<vector<ll>> gr;
ll dp[N][2];
ll solve(ll node = 1, ll par = -1, ll par_take = 0) {
	ll &ans = dp[node][par_take];
	if ( ans != start ) return ans;
	ans = 0;
	ll leave = 0, take = 0;
	for ( const ll&ch : gr[node] ) {
		if ( ch == par ) continue;
		leave += solve(ch, node, 0);
		take += solve(ch, node, 1);
	}
	ans = max(take + v[node] - 2 * c * par_take,leave);
	return ans;
}
void accepted() {
	cin >> n >> c;
	v.clear();
	gr.clear();
	v.resize(n+1);
	gr.resize(n+1);
	for ( int i = 1 ; i <= n ; i++ ) {
		cin >> v[i];
	}
	for ( int i = 0 ; i < n - 1; i++ ) {
		int x, y;
		cin >> x >> y;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	for ( int i = 0 ; i <= n ; i++ )
		dp[i][0] = dp[i][1] = start;

	cout << solve() << '\n' ;
}
signed main() {
	ASSAF;
	int exe = 1;
	cin >> exe;
	while ( exe-- )
		accepted();
}