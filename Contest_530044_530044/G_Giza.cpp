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
	long long n;
	cin >> n;

	if (n >= 2) {
		cout << 1 << '\n';
	}
	else {
		cout << 0 << '\n';
	}
}

signed main() {
	fast; // Msh Accepted Snipers
	int t;
	cin >> t;
	while (t--)
		test_case();
	return 0;
}
