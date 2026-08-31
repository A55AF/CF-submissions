/* Includes */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("O3")
// #pragma GCC target("sse4")
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
const ll LG = 30;
const ll LG_ = 35;

const ll mod = 1e9 + 7;
const ll INF = 1e18;

const ll B = 3;
const ll N = 1e6+5;

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
array<ll, LG> bitify(ll num)
{
    array<ll, LG> ar;
    for (ll i = 0; i < LG; i++)
    {
        ar[i] = getBit(num, i);
    }
    return ar;
}
struct Node
{
    array<ll, LG> bits;
};
Node merg(Node a, Node b)
{
    array<ll, LG> ar;
    for (ll i = 0; i < LG; i++)
    {
        ar[i] = a.bits[i] + b.bits[i];
    }
    return {ar};
}
Node neutral = {};
struct segment
{
private:
    ll left(ll a)
    {
        return 2 * a + 1;
    }
    ll right(ll a)
    {
        return 2 * a + 2;
    }

    ll mid(ll a, ll b)
    {
        return a + (b - a) / 2;
    }

    ll n;
    vector<ll> arr;
    vector<Node> tree;
    void build(ll node, ll lx, ll rx)
    {
        if (lx == rx)
        {
            tree[node] = {bitify(arr[lx])};
            return;
        }
        ll m = mid(lx, rx);
        build(left(node), lx, m);
        build(right(node), m + 1, rx);
        tree[node] = merg(tree[left(node)], tree[right(node)]);
    }
    void update(ll node, ll lx, ll rx, ll idx, ll val)
    {
        if (lx == rx)
        {
            arr[lx] = val;
            tree[node] = {bitify(val)};
            return;
        }
        ll m = mid(lx, rx);
        if (idx <= m)
        {
            update(left(node), lx, m, idx, val);
        }
        else
        {
            update(right(node), m + 1, rx, idx, val);
        }
        tree[node] = merg(tree[left(node)], tree[right(node)]);
    }

    Node query(ll node, ll lx, ll rx, ll l, ll r)
    {
        if (lx >= l && rx <= r)
        {
            return tree[node];
        }
        if (lx > r || rx < l)
        {
            return neutral;
        }
        ll m = mid(lx, rx);
        return merg(query(left(node), lx, m, l, r), query(right(node), m + 1, rx, l, r));
    }

public:
    segment(vector<ll> &a)
    {
        arr = a;
        n = a.size();
        tree.resize(4 * n);
        build(0, 0, n - 1);
    }
    void update(ll idx, ll val)
    {
        update(0, 0, n - 1, idx, val);
    }
    Node query(ll l, ll r)
    {
        return query(0, 0, n - 1, l, r);
    }
};

ll fact[(int)N + 5];
void pre()
{
    fact[0] = fact[1] = 1;
    for (ll i = 2; i <= N; i++)
    {
        fact[i] = mul(i, fact[i - 1]);
    }
}
ll ncr(ll n, ll r)
{
    if (n < r)
    {
        return 0;
    }
    return mul(fact[n], invv(mul(fact[r], fact[n - r])));
}
void tc()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    segment seg(vec);
    ll q;
    cin >> q;
    while (q--)
    {
        ll op;
        cin >> op;
        if (op == 1)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            l--, r--;
            array<ll, LG> ar_ = seg.query(l, r).bits;
            ll val = 0;
            for (ll i = 0; i < LG; i++)
            {
                ll len = r - l + 1;
                ll z = len - ar_[i];
                ll v2 = add(ncr(len, k), -ncr(z, k));
                // if (i <= 3)
                // {
                //     cout << len << " " << z << " " << v2 << "\n";
                // }
                ll cur = mul(fp(2, i), v2);
                val = add(val, cur);
            }

            cout << val << "\n";
        }
        else
        {
            ll p, v;
            cin >> p >> v;
            p--;
            seg.update(p, v);
        }
    }
}
signed main()
{
    fastIO;
    pre();

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        tc();
    }

    return ACCEPTED;
}