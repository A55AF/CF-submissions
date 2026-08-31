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

const int MOD = 1e9 + 7;
int add(ll a, int b) { return (a + b) % MOD; }

int n;
string l, r, s;
int dp[105][2][2][10];

int solve(int idx, int exceed, int below, int last) {
    if (idx == n) return 1;
    int &ret = dp[idx][exceed][below][last];
    if (~ret) return ret;

    ret = 0;
    for (int d = 0; d <= 9; ++d) {
        if (!exceed && d > r[idx] - '0') continue;
        if (!below && d < l[idx] - '0') continue;
        int n_exceed = exceed || d < r[idx] - '0';
        int n_below = below || d > l[idx] - '0';

        if (idx == 0) ret = add(ret, solve(idx + 1, n_exceed, n_below, d));
        else {
            if (s[idx - 1] == '<' && d <= last) continue;
            if (s[idx - 1] == '>' && d >= last) continue;
            ret = add(ret, solve(idx + 1, n_exceed, n_below, d));
        }
    }
    return ret;
}

void accepted() {
    memset(dp, -1, sizeof dp);
    cin >> l >> r >> s;
    n = l.size();

    cout << solve(0, 0, 0, 0) << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}