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
#define int long long

int n, x;
vector<vector<int>> graph;
vector<bool> vis;
vector<ll> sum, current;
vector<int> answer;

int dfs_cost(int node = 1, int parent = -7950) {
	vis[node] = true;
	sum[node] = current[node];
	for (const int& child : graph[node]) 
		if (!vis[child])
			sum[node] += dfs_cost(child, node);
	return sum[node];
}

void dfs_answer(int node = 1, int ans = -7950) {
	// Corner Case
	if (sum[1] < x) return;

	vis[node] = true;
	answer[node] = ans;

	for (const int& child : graph[node]) {
		if (!vis[child]) {
			dfs_answer(child, ((sum[node] >= x) ? node : ans));
		}
	}
}

void test_case() {
	cin >> n >> x;
	graph.resize(n+1);
	vis.resize(n+1);
	sum.resize(n+1, 0);
	current.resize(n+1);
	answer.resize(n+1, -1);

	for (int i = 2; i <= n; ++i) {
		int input;
		cin >> input;

		graph[i].push_back(input);
		graph[input].push_back(i);
	}

	for (int i = 1; i <= n; ++i) {
		int input;
		cin >> input;

		current[i] = input;
	}

	dfs_cost();

	vis.clear();
	vis.resize(n+1);

	dfs_answer();

	for (int i = 2; i <= n; ++i) {
		cout << answer[i] << ' ';
	}
	cout << '\n';
}

signed main() {
	fast; // Msh Accepted Snipers
	test_case();
	return 0;
}
