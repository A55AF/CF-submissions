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
	int n, m; cin >> n >> m;
	int cups[n] = {}, cap[n]; 
	ordered_set st;
	for (int i = 0;i < n;i++)
		cin >> cap[i];

	for (int i = 0;i < n;i++)
		st.insert(0);

	while (m--) {
		int type; cin >> type;

		if (type == 1) {
			int i, x; cin >> i >> x;
			i--;
			int remaining = cap[i] - cups[i];
			if (x > remaining) continue;
			st.erase(st.find_by_order(st.order_of_key(cups[i])));
			cups[i] += x;
			st.insert(cups[i]);
		}else if (type == 2) {
			int i, x; cin >> i >> x;
			i--;
			if (x > cups[i]) continue;
			st.erase(st.find_by_order(st.order_of_key(cups[i])));
			cups[i] -= x;
			st.insert(cups[i]);
		} else {
			int k; cin >> k;
			cout << st.size() - st.order_of_key(k) << '\n';
		}
	}
}

signed main() {
	fast; // Msh Accepted Snipers
	// int t;
	// cin >> t;
	// while (t--)
		test_case();
	return 0;
}
