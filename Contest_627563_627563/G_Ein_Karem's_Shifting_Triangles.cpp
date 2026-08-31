/* includes */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

/*__________________________________________*/
/* defines  */
#define ll long long
#define ACCEPTED 0
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define all(x) x.begin(), x.end()
/*__________________________________________*/
/* ordered set */
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename t>
using ordered_multiset = tree<t, null_type, less_equal<t>, rb_tree_tag, tree_order_statistics_node_update>;
/*__________________________________________*/
/* constants */
const ll LG = 25;
const ll mod = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e7 + 5;
const ll B = 3;
ll bases[B] = {800, 900, 1000};

#define multihash array<ll, B>
/*__________________________________________*/

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
void tc()
{
}
signed main()
{
    fastIO;

    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     tc();
    // }

    ll n;
    cin >> n;
    set<set<pair<ll, ll>>> st1, st2, st3;

    vector<array<ll, 6>> vec(n);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 6; j++)
        {
            cin >> vec[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        auto [x1, y1, x2, y2, x3, y3] = vec[i];

        ll x = x1, y = y1;
        st1.insert({make_pair(x1 - x, y1 - y),
                    make_pair(x2 - x, y2 - y),
                    make_pair(x3 - x, y3 - y)});
    }

    for (ll i = 0; i < n; i++)
    {
        auto [x1, y1, x2, y2, x3, y3] = vec[i];

        ll x = x2, y = y2;
        st2.insert({make_pair(x1 - x, y1 - y),
                    make_pair(x2 - x, y2 - y),
                    make_pair(x3 - x, y3 - y)});
    }

    for (ll i = 0; i < n; i++)
    {
        auto [x1, y1, x2, y2, x3, y3] = vec[i];

        ll x = x3, y = y3;
        st3.insert({make_pair(x1 - x, y1 - y),
                    make_pair(x2 - x, y2 - y),
                    make_pair(x3 - x, y3 - y)});
    }

    cout << min({st1.size(), st2.size(), st3.size()});

    return ACCEPTED;
}