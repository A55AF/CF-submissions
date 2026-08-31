#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
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
const ll mod1 = 1e9 + 7,mod2 = 1e9 + 9;
const ll bas1 = uniform_int_distribution<ll>(0.25*mod1, 0.75*mod1)(rng);
const ll bas2 = uniform_int_distribution<ll>(0.25*mod2, 0.75*mod2)(rng);
uniform_int_distribution<ll> dist1(1, mod1-1);
uniform_int_distribution<ll> dist2(1, mod2-1);
#define ld long double
#define int long long
const ld EPS=1e-9,PI=3.14159265358979323846;
const int mod=998244353,lg=25,N=1e5+5, bits = 32,INF=1e18;

void Wadyyy() {
 int n;
    cin >> n;
    vector<int> a,b;
    map<int,ll> mp2;
    map<int,int>mp;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        mp[x]=1;
        mp2[x]++;
    }
    for (auto i:mp) {a.push_back(i.first);}
    for (auto i:mp2) {b.push_back(i.second);}
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end());
    int ans=0;
    for (int i=0;i<a.size();i++) {
        ans+=a[i]*b[i];
    }
    cout << ans << endl;
}
signed main() {
    Lotus;
    int t=1;
   cin>>t;
    while (t--)
        Wadyyy();

    return 0;
}