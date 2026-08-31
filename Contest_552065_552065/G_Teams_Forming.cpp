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
#define int long long

signed main() {
    Mexico;
    int Tacos = 1;
    // cin >> Tacos;
    while (Tacos--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int& itr : numbers) cin >> itr;
        sort(numbers.begin(), numbers.end());
        ll answer = 0;
        for (int i = 1; i < n; i += 2) {
            answer += abs(numbers[i] - numbers[i - 1]);
        }
        cout << answer << el;
    }
    return 0;
}