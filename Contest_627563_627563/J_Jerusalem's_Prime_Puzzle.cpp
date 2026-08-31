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

const int mod=1e4,lg=25,N=1e7+5, bits = 32;
void file(char in[], char out[]){freopen(in, "r", stdin);}
vector<int>p;
vector<int>prime;
void sieve() {
    prime.assign(N, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i * i < N; i++) {
        if (prime[i]) {
            for (ll j = i * i; j < N; j += i)
                prime[j] = false;
        }
    }
    for (int i = 2; i < N; i++)
        if (prime[i])
            p.push_back(i);
}
void Wadyyy() {
 int n,q;
    cin>>n>>q;
    vector<int>a(n);
    vector<vector<int>>prf(n+1,vector<int>(205,0));
    for(int i=0;i<n;i++) {
       int x;
        cin>>x;
        if (x >= 2) {
            auto it = upper_bound(p.begin(), p.end(), x);
            --it;
            int cost = x - *it;
            prf[i+1][cost]++;
        }
        for (int j=0;j<205;j++) {
            prf[i+1][j]+=prf[i][j];
        }
    }


    while(q--) {
        int l, r;
        ll k;
        cin >> l >> r >> k;
        int ans = 0;
        int z = prf[r][0] - prf[l - 1][0];
        ans += z;
        for (int i = 1; i < 205; i++) {
            int cnt = prf[r][i] - prf[l - 1][i];
            if (cnt == 0) continue;
            ll xx = min((ll)cnt, k / i);
            ans += xx;
            k -= xx * i;
            if (k < i) {
                break;
            }
        }
        cout << ans << el;
    }
}
signed main() {
    Lotus;
    int  t=1;
    //file("max.in","out.txt");
//    cin>>t;
    sieve();
    while (t--)
        Wadyyy();



    return 0;
}