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
void Wadyyy() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> val(n);
    for(int i=0;i<n;i++)cin>>val[i];
    vector<vector<int>> a(n, vector<int>(n,0));
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        u--,v--;
        a[u][v]+=w;
        a[v][u]+=w;
    }
    int ans=0;
    for(int mask=0; mask<(1LL<<n); mask++){
        if(__builtin_popcountll(mask)!=k)
            continue;
        vector<int> nodes;
        int cur=0;

        for(int bit=0;bit<n;bit++){
            if((mask>>bit)&1ll){
                nodes.push_back(bit);
                cur+=val[bit];
            }
        }

        for(int i=0;i<nodes.size();i++){
            for(int j=i+1;j<nodes.size();j++){
                cur+=a[nodes[i]][nodes[j]];
            }
        }

        ans=max(ans,cur);
    }

    cout<<ans<<'\n';
}
signed main() {
    Lotus;
    int  t=1;
    //file("max.in","out.txt");
//cin>>t;
    while (t--)
        Wadyyy();



    return 0;
}