#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define Mexico ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define el '\n';

signed main() {
    Mexico;
    int Tacos = 1;
    cin >> Tacos;
    while (Tacos--) {
        int n, k;
        cin >> n >> k;
        string answer = "";
        while ((int)answer.size() < n) {
            for (int i = 0; i < k; ++i) {
                answer += char(i + 'a');
                if (answer.size() == n) break;
            }
        }
        cout << answer << el;
    }
    return 0;
}