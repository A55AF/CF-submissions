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
int sub(ll a, int b) { return (a - b + MOD) % MOD; }
int mul(ll a, int b) { return (a * b) % MOD; }
int fastpower(int base, int power) {
    int ret = 1;
    while (power) {
        if (power & 1) ret = mul(ret, base);
        base = mul(base, base);
        power >>= 1;
    }
    return ret;
}
int division(int a, int b) { return mul(a, fastpower(b, MOD - 2)); }

int formula(int y, int e) {
    if (!e) return 0;
    int up = mul(y, sub(fastpower(y, e), 1));
    int down = sub(y, 1);
    return division(up, down);
}

void accepted() {
    string s;
    int k;
    cin >> s >> k;
    int sz = s.size(), val = fastpower(2, sz);

    int ans = 0;
    for (int i = 1; i < sz; ++i) {
        string cur = "";
        cur += s[i - 1];
        cur += s[i];

        int num = stoi(cur);
        if (num % 4) continue;
        // else

        int x = i - 1;
        int a = fastpower(2, x);
        int b = add(formula(val, k - 1), 1);
        ans = add(ans, mul(a, b));
    }

    // cout << imie(ans) << endl;
    if (k >= 2) {
        string cur = "";
        cur.push_back(s[sz - 1]);
        cur.push_back(s[0]);

        int num = stoi(cur);
        // cout << imie(num) << endl;
        if (num % 4 == 0) {
            int x = sz - 1;
            int a = fastpower(2, x);
            int b = add(formula(val, k - 2), 1);
            // cout << imie(a) << imie(b) << imie(x) << endl;
            ans = add(ans, mul(a, b));
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