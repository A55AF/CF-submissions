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

// Tiger NO FAIR XX
void accepted() {
    string s; cin >> s;
    int n = s.size();

    int cnt = 0;
    for (int i = 0; i < n; ++i) cnt += s[i] == '?';

    int ways = 1;
    for (int i = 0; i <= (n - 1) / 2; ++i) {
        char one = s[i];
        char two = s[n - i - 1];
        if (one == '?' && two == '?') ways = mul(ways, 26);
        else if (one != '?' && two == '?') {}
        else if (one == '?' && two != '?') {}
        else if (one == two) {}
        else ways = mul(ways, 0);
    }


    cout << division(ways, fastpower(26, cnt)) << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}