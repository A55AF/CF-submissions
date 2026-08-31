#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define Mexico ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int n, m;
vector<vector<int>> graph;
vector<bool> vis;

vector<int> tmp;
void connected(int node) {
	if (vis[node]) return;
	vis[node] = true;
	tmp.push_back(node);
	
	for (const auto& child : graph[node]) {
		if (vis[child] == false) {
			connected(child);
		}
	}
}

signed main() {
    Mexico
    int Tacos = 1;
    // cin >> exe;
    while (Tacos--){
		cin >> n >> m;
		graph.resize(n + 1);
		vis.resize(n + 1);
		for (int i = 0, u, v; i < m; ++i) {
			cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		
		int answer = 0;
		for (int i = 1; i <= n; ++i) {
			if (!vis[i]) {
				tmp.clear();
				connected(i);
				
				bool valid = true;
				for (int j = 0; j < (int)tmp.size(); ++j) {
					if ((int)graph[tmp[j]].size() != 2) {
						valid = false;
						break;
					}
				}
				
				answer += valid;
			}
		}
		cout << answer << '\n';
    }
    return 0;
}
