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
const int mod=1e4,lg=25,N=1e5+5, bits = 32;
void file(char in[], char out[]){freopen(in, "r", stdin);}
bool ok(string&window,string&k,string&cur) {
    int winlen =(int) window.length();
    int curlen = (int)cur.length();
    int klen = (int)k.length();
    if (curlen +winlen<klen)return  true;
    if (curlen +winlen>klen)return  false;
    return window+cur<=k;
}
void Wadyyy() {
    int n,j=0,ans=0;
    string k,window="";
    cin>>n>>k;
    vector<string>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<n;i++) {
        while (j<n and ok(window,k,a[j])) {window+=a[j++];}
        //cout << window <<' '<<j<< endl;
        ans=max(ans,j-i);
        if (j > i) {
            int sz = a[i].length();
            window.erase(0, sz);

        } else {j = i + 1;}

    }
    cout<<ans<<endl;
}
signed main() {
    Lotus;
    int  t=1;
    //file("max.in","out.txt");
    cin>>t;
    while (t--)
        Wadyyy();



    return 0;
}