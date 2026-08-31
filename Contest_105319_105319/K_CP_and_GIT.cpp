#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m, k; cin >> n >> m >> k;
		unordered_map<string, bool> arr, stage, toBeStaged;

		for (int i = 0;i < n;i++){
			string s; cin >> s;
			arr[s] = 1;
		}

		for (int i = 0;i < m;i++){
			string s; cin >> s;
			stage[s] = 1;
		}

		for (int i = 0;i < k;i++){
			string s; cin >> s;
			toBeStaged[s] = 1;
		}

		int minimum = 1e9;
		// Stage all -> remove unnecessary (1)
		int ans = 1;
		if (n == m)
			ans = 0;
		minimum = min(minimum, ans + (n - k));
		
		// Stage singles -> remove unnecessary (2)
		ans = 0; int size = m;
		for (auto& [s, _] : toBeStaged)
			if (!stage[s])
				ans++, size++;
		minimum = min(minimum, ans + (size - k));

		// Remove all -> add Singles (3)
		ans = 1;
		if (m == 0)
			ans = 0;
		minimum = min(minimum, ans + k);

		cout << minimum << '\n';
	}
    return 0;
}