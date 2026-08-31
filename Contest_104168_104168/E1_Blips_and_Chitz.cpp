#include <bits/stdc++.h>
#define int long long

using namespace std;


signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	
	int tc;
	cin >> tc;

	while (tc--) {
		
		int n, m;
		cin >> n >> m;
		vector<int>w(n), p(n);

		for (auto& i : w)cin >> i;
		for (auto& i : p)cin >> i;

		vector<vector<int>>dp(n + 1, vector<int>(m + 1, -1));

		auto solve = [&](auto&self,int idx, int mod)->int {
			if (idx == n) {
				if (mod == 0)return 0;
				return -1e15;
			}

			auto& ret = dp[idx][mod];
			if (ret != -1)return ret;

			ret = self(self, idx + 1, mod);
			ret = max(ret, self(self, idx + 1, (mod + w[idx]) % m) + p[idx]);
			return ret;
		};

		cout << solve(solve,0, 0) << "\n";
	}
}
