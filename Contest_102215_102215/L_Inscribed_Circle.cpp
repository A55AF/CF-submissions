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
void tc()
{
    int x1i, y1i, r1i, x2i, y2i, r2i;
    cin >> x1i >> y1i >> r1i >> x2i >> y2i >> r2i;
    double x1 = x1i, y1 = y1i, r1 = r1i, x2 = x2i, y2 = y2i, r2 = r2i;
    double rx = (r1 + r2) - dist(x1, y1, x2, y2);
    rx /= 2;

    double moved = (r1 - rx) / dist(x1, y1, x2, y2);
    // moved=1;
    double ans_x = (x2 - x1) * moved + x1, ans_y = (y2 - y1) * moved + y1;
    cout << fixed << setprecision(10) << ans_x << " " << ans_y << " " << rx << "\n";
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