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

ll nC2(ll n) {
    return n * (n - 1) / 2;
}

void accepted() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int &itr : arr) cin >> itr;
    sort(all(arr));

    ordered_multiset<int> ms;
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ll one = ms.order_of_key(arr[i] + 1);
        ll two = ms.order_of_key(arr[i] - x);
        ans += nC2(one - two);
        ms.insert(arr[i]);
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