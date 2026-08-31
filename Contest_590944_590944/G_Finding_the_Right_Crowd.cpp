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

signed main() {
	// fast; // anas_ahmad7950
	int n;
	cin >> n;
	vector<vector<ll>> people(n);
	for (int i = 0; i < n; ++i) {
		int m;
		cin >> m;
		for (int j = 0; j < m; ++j) {
			ll num;
			cin >> num;
			people[i].push_back(num);
		}
		
		sort(people[i].begin(), people[i].end());
	}
	
	vector<vector<ll>> prefix(n);
	for (int i = 0; i < n; ++i) {
		int m = (int)people[i].size();
		vector<ll> current(m + 1);
		for (int j = 1; j <= m; ++j) {
			current[j] = current[j-1] + people[i][j-1];
		}
		prefix[i] = current;
	}
	
	int q;
	cin >> q;
	while (q--) {
		ll x;
		cin >> x;
		
		pair<int, ll> answer = {-1, 4e18}; // {idx, value}
		for (int i = 0; i < n; ++i) {
			vector<ll>::iterator itr = upper_bound(people[i].begin(), people[i].end(), x);
			ll ls = itr - people[i].begin();
			ll more = people[i].size() - ls;
			
			ll ls_prefix = prefix[i][ls];
			ll more_prefix = prefix[i][(int)people[i].size()] - ls_prefix;
			
			ll tmp = (ls * x - ls_prefix) + (more_prefix - more * x);
			
			if (tmp < answer.second) {
				answer.first = i;
				answer.second = tmp;
			}
		}
		
		cout << answer.first + 1 << ' ';
	}
	cout << '\n';
	return 0;
}
