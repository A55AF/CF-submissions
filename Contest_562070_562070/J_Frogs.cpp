#include<bits/stdc++.h>
using namespace std;
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define imie(...) " [" << #__VA_ARGS__ << " = " << (__VA_ARGS__) << "] "
#define display(x) cout<<#x<<": ";for(auto itr:x)cout<<itr<<' ';cout<<endl;
#define HERE cout << "HERE" << endl;
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using ordered_multiset = tree<T, null_type, std::less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define int long long

// Tiger NO FAIR XX
const int INF = 1e9;
void accepted() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int &itr : arr) cin >> itr;

    int l1 = INF, r1 = -INF;
    int l2 = INF, r2 = -INF;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) continue;

        if (arr[i] == 1) {
            l1 = min(l1, i);
            r1 = max(r1, i);
        }
        else {
            l2 = min(l2, i);
            r2 = max(r2, i);
        }
    }

    if (l1 == INF) return cout << r2 - l2 + 1 << '\n', void();
    if (l2 == INF) return cout << r1 - l1 + 1 << '\n', void();

    int ans = max(r1, r2) - min(l1, l2) + 1;
    for (int i = 0; i < n; ++i) {
        ++l1; ++r1;
        --l2; --r2;

        ans = min(ans, max(r1, r2) - min(l1, l2) + 1);
    }
    cout << ans << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}