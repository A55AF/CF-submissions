#include <bits/stdc++.h>
#define int long long
#define ll long long

using namespace std;

const int Mod = 1e9 + 7;

int mul(int a, int b, int m = Mod) {
	return 1ll * a * b % m;
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	
	int tc;
	cin >> tc;

	while (tc--) {
		
		int n;
		cin >> n;

		vector<int>p(n + 1),deg(n+1);
		deg[1] = 20;
		for (int i = 2; i <= n; i++)cin >> p[i], deg[p[i]]++;

		vector<int>c;

		for (int i = 2; i <= n; i++) {
			if (deg[i] == 0) {
				int cnt = 0;
				int cur = i;
				while (deg[cur] < 2) {
					cnt++;
					cur = p[cur];
				}
				//cnt--;
				c.push_back(cnt);
			}
		}

		int ans = 1;
		for (auto& i : c) {
			ans = mul(ans, i);
		}

		if (c.size() == 1)ans = n;
		cout <<c.size()<<" "<< ans << "\n";
	}
}
