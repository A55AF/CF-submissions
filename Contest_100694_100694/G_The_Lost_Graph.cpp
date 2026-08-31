#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    int n; cin >> n;
    vector<pair<bool, int>> dfs;
    for (int i = 0;i < 2 * n;i++){
        string s; cin >> s;
        int a; cin >> a;
        dfs.push_back({(s == "out"), a});
    }

    vector<vector<int>> graph(n+1);

    vector<int> vis; vis.push_back((dfs[0].second));
    for (int i = 1;i < 2 * n;i++){
        if (dfs[i].first){
            vis.pop_back();
        }else{
            graph[vis[(int)vis.size()-1]].push_back((dfs[i].second));
            vis.push_back(dfs[i].second);
        }
    }

    for (int i = 1;i <= n;i++){
        for (auto child : graph[i]){
            cout << i <<" " << child << '\n';
        }
    }
    return 0;
}