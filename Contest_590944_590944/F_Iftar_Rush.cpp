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

void test_case() {
	int n;
	cin >> n;
	vector<int> freq(n+1);
	for (int i = 0, input; i < n; ++i) {
		cin >> input;
		++freq[input];
	}
	
	int idx = 1;
	int meals = 0;
	while (idx <= n) {
		while ((idx <= n) && (idx <= meals || !freq[idx]))
			++idx;
		if (idx > n) break;
		
		++meals;
		--freq[idx];
	}
	cout << meals << '\n';
}

signed main() {
	fast; // anas_ahmad7950
	int t;
	cin >> t;
	while (t--) test_case();
	return 0;
}
