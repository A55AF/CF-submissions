#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	

	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;

		set<int>st;
		for (int i = 1; i * i <= n; i++) {
			if (n % i)continue;
			st.insert(i);
			st.insert(n / i);
		}

		for (auto& i : st)cout << i << " "; cout << "\n";
	}
}
