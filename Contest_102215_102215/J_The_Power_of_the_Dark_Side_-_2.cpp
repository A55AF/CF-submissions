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
	vector<pair<int,pair<int,int>>> v(n);
	vector<int>sum(n),mn(n),ans(n);
	vector<int>iddx(n);
	for (int i = 0; i < n; i++) {
	cin >> v[i].first >> v[i].second.first >> v[i].second.second;
		sum[i] = v[i].first + v[i].second.first+v[i].second.second;
		mn[i] =sum[i]-max({v[i].first,v[i].second.first,v[i].second.second});
		iddx[i] = mn[i];
	}
	sort(mn.begin(),mn.end());
	for (int i = 0; i < n; i++) {
		int tar = sum[i]-2 ;
		auto it = upper_bound(mn.begin(),mn.end(),tar)-mn.begin();
		int idx=it;
		if (iddx[i]<=tar) {idx--;}
		ans[i]=idx;
	}
	for (int i = 0; i < n; i++) {
		cout << max(ans[i],0ll) << " ";
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