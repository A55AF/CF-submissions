#include <bits/stdc++.h>
#define int long long

using namespace std;


signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	
	int tc;
	cin >> tc;

	while (tc--) {
		
		int n, k, x;
		cin >> n >> k >> x;

		vector<vector<int>>v(k);

		for (int i = 1; i <= n; i++)
		{
			int xx;
			cin >> xx;

			v[i % k].push_back(xx);
		}

		for (auto& i : v)sort(i.begin(), i.end());

		int ans = 0;
		for (auto& i : v) {
			int md = i[i.size() / 2];

			for (auto& j : i)ans = ans + abs(md - j);
		}

		cout << x * ans << "\n";
	}
}
