#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 1'000'000'007
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define P pair<int, int>
#define success cout << "SUCCESS\n";
#define display(x) for(const auto& itr : (x)) {cout << itr << ' ';} cout << '\n';
#define vvp vector<vector<pair<int, ll>>>
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

void test_case() {
	int n ;
	cin >> n ;
	int a[n] , b[n] ;
	int cnt1 = 0 , cnt2 = 0;
	for( int i = 0 ; i < n ; i++ ) cin >> a[i] , cnt1 += a[i];
	for( int i = 0 ; i < n ; i++ ) cin >> b[i] , cnt2 += b[i];
	int ans1 = 0, ans2 = 0;
	for( int i = 0 ; i < n ; i++  ) {
		if ( a[i]^b[i] ) {
			if ( a[i] ) ans1++;
			if ( b[i] ) ans2++;
		}
	}
	if (!cnt1) cnt1=1;
	if (!cnt2) cnt2=1;
	cout << fixed << setprecision(6) <<  ((double)ans1/cnt1)*100 << ' ' << ((double)ans2/cnt2)*100 ;
	cout << '\n' ;
}

signed main() {
	fast; // Msh Accepted Snipers
	int t;
	cin >> t;
	while (t--)
		test_case();
	return 0;
}
