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

    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<ll> frqPref(n), frqSuff(n), distPref(n), distSuff(n);

    vector<ll> prf(n, INF), suf(n, INF);
    {
        map<ll, ll> mp;
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            st.insert(vec[i]);
            mp[vec[i]]++;
            frqPref[i] = mp[vec[i]];
            distPref[i] = st.size();
            prf[i] = frqPref[i] - distPref[i];
        }
    }
    {
        map<ll, ll> mp;
        set<ll> st;
        for (ll i = n - 1; i >= 0; i--)
        {
            st.insert(vec[i]);
            mp[vec[i]]++;
            frqSuff[i] = mp[vec[i]];
            distSuff[i] = st.size();
            suf[i] = -frqSuff[i] + distSuff[i];
        }
    }

    ll ans = 0;
    ordered_set<pair<ll, ll>> ms1;
    map<ll, ll> mp;
    for (ll i = n - 1; i >= 0; i--)
    {
        ans += ms1.size() - ms1.order_of_key({prf[i], 0});
        ms1.insert({suf[i], mp[suf[i]]++});
    }
    cout << ans << "\n";

    return ACCEPTED;
}