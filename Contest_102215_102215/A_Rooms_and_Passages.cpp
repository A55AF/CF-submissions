#include <bits/stdc++.h>
typedef long long ll;
#define el '\n'
using namespace std;
#define Lotus ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
#define int long long
void Wadyyy() {
	int n;
	cin >> n;
	vector<int> a(n + 1),l(n + 1, 0),b(n + 2, n + 1),ans(n,0);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		int c = abs(a[i]);
		if (a[i] < 0) {
			l[c] = i;
		} else {
			int x= l[c];
			if (x > 0) {
				b[x - 1] = min(b[x - 1], i);
			}
		}
	}
	int cur = n + 1;
	for (int i = n - 1; i >= 0; --i) {
		cur = min(cur, b[i]);
		ans[i] = (cur - 1) - i;
	}
	for (int i = 0; i < n; ++i) {
		cout << ans[i] << ' ';
	}
}
signed main() {
	Lotus;
	int t=1;
	//cin>>t;
	while (t--)
		Wadyyy();
	return 0;
}