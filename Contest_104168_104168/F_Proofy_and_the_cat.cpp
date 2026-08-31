#include <bits/stdc++.h>
#define int long long

using namespace std;


signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	
	int tc;
	cin >> tc;

	while (tc--) {
		
		int n,k;
		cin >> n>>k;

		vector<vector<int>>v(n);
		vector<int>a(n), w(n);

		for (auto& i : a)cin >> i;
		for (int i = 1; i < n; i++) {
			int p;
			cin >> p; p--;
			v[p].push_back(i);
		}
		for (int i = 1; i < n; i++)cin >> w[i];


		auto can = [&](int md)->bool {
			queue<int>q;
			q.push(0);
			vector<int>p(n);
			p[0] = a[0];
			while (q.size()) {
				int node = q.front();
				q.pop();
				if (p[node] >= k)return true;
				for (auto& to : v[node]) {
					if (md >= w[to]) {
						p[to] = a[to] + p[node];
					}
					else {
						p[to] = a[to];
					}
					q.push(to);

				}
			}
			return false;
		};

		int l = 0, r = *max_element(w.begin(),w.end());

		can(1);
		int ans = -1;
		while (l <= r) {
			int md = (l + r) / 2;
			if (can(md)) {
				ans = md;
				r = md - 1;
			}
			else {
				l = md + 1;
			}
		}
		cout << ans << "\n";
	}
}
