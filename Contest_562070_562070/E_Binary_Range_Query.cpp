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

// Tiger NO FAIR XX

string s;
void accepted() {
    cin >> s;
    vector<int> prv(s.size(), -1);
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == '0' && s[i - 1] == '1') { prv[i] = i - 1; }
        else if (s[i] == '0' && s[i - 1] == '0') { prv[i] = prv[i - 1]; }
    }

    vector<int> nums;
    map<int, pair<int, int>> mp;
    for (int i = 0; i < s.size(); i++) {
        int num = 0;
        for (int j = i; j >= 0; j--) {
            if (s[j] == '1' && (i - j) > 30) break;

            if (s[j] == '0') j = prv[j] + 1;
            num += (1 << (i - j)) * (s[j] == '1');
            nums.push_back(num);
            if (mp.count(num)) {
                mp[num] = min(mp[num], {j, i});
            } else mp[num] = {j, i};
        }
    }
    sort(all(nums));

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        auto val = lower_bound(all(nums), l);

        if (val == nums.end() || *val > r) cout << -1 << ' ' << -1 << '\n';
        else {
            // cout << imie(*val) << endl;
            cout << mp[*val].first + 1 << ' ' << mp[*val].second + 1 << '\n';
        }
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}