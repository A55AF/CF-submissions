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
double sq(ll a)
{
    return a * a;
}
double dist(double x1, double y1, double x2, double y2)
{
    return sqrt(sq(x2 - x1) + sq(y2 - y1));
}
ll cil(ll a, ll b)
{
    return (a / b) + ((a % b) != 0);
}
bool check(string &s, string &in)
{
    char c1 = s[0], c2 = s[1], c3 = s[2];

    ll cnt1 = 0, cnt2 = 0;
    ll n = in.size();
    for (ll i = 0; i < n; i++)
    {
        if (in[i] == c1)
        {
            break;
        }
        cnt1 += in[i] == c2;
    }

    for (ll i = n - 1; i >= 0; i--)
    {
        if (in[i] == c3)
        {
            break;
        }
        cnt2 += in[i] == c2;
    }

    return count(all(in), c2) == cnt1 + cnt2;
}
void tc()
{
    string in;
    cin >> in;
    bool yes = 0;
    string s = "RGB";
    sort(all(s));
    do
    {
        yes |= check(s, in);
    } while (next_permutation(all(s)));
    cout << ((yes) ? "YES" : "NO");
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