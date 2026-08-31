#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	

	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;

		vector<int>v(n + 2);
		for (int i = 1; i <= n; i++)cin >> v[i];

		
		auto add = [&](int a, int b)->int {
			a = a + mod;
			b += mod;
			return ((a % mod) + (b % mod)) % mod;
		};

		auto mul = [&](int a, int b)->int {
		
			return ((a % mod) * (b % mod)) % mod;
		};


		vector<int>suf(n + 2),sufmul(n+2);

		for (int i = n; i > 0; i--) {
			suf[i] = add(suf[i + 1], v[i]);
		}

		for (int i = n; i > 0; i--) {
			sufmul[i] = add(sufmul[i + 1], mul(v[i],suf[i+1]));
		}

		int ans = 0;
		for (int i = n; i > 0; i--) {
			ans = add(ans,mul(v[i],sufmul[i+1]));
		}

		cout << ans << "\n";

	}
}
