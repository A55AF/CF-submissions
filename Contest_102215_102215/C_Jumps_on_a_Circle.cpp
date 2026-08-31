/*  includes    */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
/*__________________________________________*/
/*  defines     */
#define ll long long
#define ACCEPTED 0
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define all(x) x.begin(), x.end()
/*__________________________________________*/
/*  ordered set  */
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename t>
using ordered_multiset = tree<t, null_type, less_equal<t>, rb_tree_tag, tree_order_statistics_node_update>;
/*__________________________________________*/
/*  constants  */
long long mod = 998244353;
const long long INF = 1e9;
const ll N = 1e5 + 5;
const ll M = 65;

const ll LG = 20;
/*__________________________________________*/
ll mul(ll a, ll b)
{
    return ((a % mod) * (b % mod)) % mod;
}
ll add(ll a, ll b)
{
    return ((a % mod) + (b % mod)) % mod;
}
ll fp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll hp = fp(a, b / 2);
    hp = mul(hp, hp);
    return (b & 1) ? mul(a, hp) : hp;
}
bool vis[(int)1e7 + 1]{};
void tc()
{

    ll cnt = 0;
    ll p, n;
    cin >> p >> n;
    mod = p;
    ll cur = 0;
    for (ll i = 0; i <= min(p, n) && cnt < p; i++)
    {
        cur = add(cur, i);
        cnt += !(vis[cur]);
        vis[cur] = 1;
    }
    cout << cnt << "\n";
}
signed main()
{
    fastIO;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        tc();
    }
    return ACCEPTED;
}