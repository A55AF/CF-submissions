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
void accepted() {
    int n; cin >> n;
    string s = to_string(n);

    vector<int> values;
    for (int i = 0; i <= 9; ++i) { // from
        for (int j = 0; j <= 9; ++j) { // to
            string nw = s;
            for (int k = 0; k < nw.size(); ++k) if (nw[k] - '0' == i) nw[k] = char(j + '0');

            if (nw[0] != '0') values.push_back(stoll(nw));
        }
    }

    int sz = values.size();
    int ans = 0;
    for (int i = 0; i < sz; ++i) {
        for (int j = 0; j < sz; ++j) {
            ans = max(ans, abs(values[i] - values[j]));
        }
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