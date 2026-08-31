/* Includes */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
/*________________________________________________*/
/* using namespace */

using namespace std;
using namespace __gnu_pbds;
/*________________________________________________*/

/* Defines*/
#define ll long long
#define ACCEPTED 0
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define all(x) x.begin(), x.end()
/*________________________________________________*/

/* Ordered Set */
template <typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename t>
using ordered_multiset = tree<t, null_type, less_equal<t>, rb_tree_tag, tree_order_statistics_node_update>;
/*________________________________________________*/

/* Constants */
const ll LG = 25;
const ll mod = 1e9 + 7;
const ll INF = 4e18;
const ll N = 2500;
const ll B = 3;
ll bases[B] = {800, 900, 1000};
#define multihash array<ll, B>
/*________________________________________________*/

/* Custom hashing and functions*/
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

ll mul(ll a, ll b)
{
    return ((a % mod) * (b % mod) + mod + mod) % mod;
}
ll mul3(ll a, ll b, ll c)
{
    return mul(a, mul(b, c));
}
ll add(ll a, ll b)
{
    return ((a % mod) + (b % mod) + mod + mod) % mod;
}
ll add3(ll a, ll b, ll c)
{
    return add(a, add(b, c));
}
ll divi(ll a, ll b)
{
    return ((a) / (b)) % mod;
}
ll fp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll hp = fp(a, b / 2);
    hp = mul(hp, hp);
    return (b & 1) ? mul(a, hp) : hp;
}
ll invv(ll a)
{
    return fp(a, mod - 2);
}
ll getBit(ll num, ll idx)
{
    return (num >> idx) & 1;
}
/*________________________________________________*/

struct matrix
{
    vector<vector<ll>> mat;
    ll n, m;

    matrix(ll ni, ll mi, ll num = 0)
    {
        mat.resize(ni, vector<ll>(mi, num));
        n = ni;
        m = mi;
    }
};

matrix matmul(matrix &a, matrix &b)
{
    matrix c(a.n, b.m);
    for (ll i = 0; i < a.n; i++)
    {
        for (ll j = 0; j < b.m; j++)
        {
            c.mat[i][j] = INF;
            for (ll k = 0; k < a.m; k++)
            {

                c.mat[i][j] = min(c.mat[i][j], min(INF, a.mat[i][k] + b.mat[k][j]));
            }
        }
    }
    return c;
}

matrix matpow(matrix base, long long n)
{

    matrix ans(base.n, base.m);
    for (ll i = 0; i < base.n; i++)
    {
        ans.mat[i][i] = 1;
    }
    if (n <= 1)
    {
        return (n) ? base : ans;
    }
    while (n)
    {
        if (n & 1)
        {
            ans = matmul(ans, base);
        }
        base = matmul(base, base);
        n >>= 1;
    }
    return ans;
}
ll root(ll a)
{
    ll st = 1, end = 2e9+5;
    ll ans = 1;
    while (st <= end)
    {
        ll mid = (st + end) / 2;
        if (mid * mid <= a)
        {
            st = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
ll calc(ll a, ll b)
{
    ll val = (2 + a / 2) * (2 + a / 2);
    ll num = (a / 2 + 2) + root(val - 4 * (a + b));
    return num / 2;
}
void tc()
{
    ll a, b;
    cin >> a >> b;
    if (b==0) {
        cout << a<<' '<<1<<endl;
        return;
    }
    if (a & 1)
    {
        swap(a, b);
    }
    ll num1 = calc(a, b), num2 = (a + b) / num1;
    cout << max(num1, num2) << " " << min(num1, num2) << "\n";
}

signed main()
{
    fastIO;

    ll t = 1;
    cin >> t;
    while (t--)
    {
        tc();
    }
    return ACCEPTED;
}