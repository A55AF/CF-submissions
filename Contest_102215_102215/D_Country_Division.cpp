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

struct LCA
{
    vector<vector<ll>> par;
    vector<ll> in;
    vector<ll> out;
    vector<ll> dist;
    ll timer = 0;
    ll root;
    ll n;
    void bfs(vector<vector<ll>> &adj)
    {
        dist[root] = 0;
        queue<ll> q;
        q.push(root);
        while (!q.empty())
        {
            ll node = q.front();
            q.pop();
            for (auto child : adj[node])
            {
                if (dist[child] == INF)
                {
                    q.push(child);
                    dist[child] = dist[node] + 1;
                }
            }
        }
    }
    void dfs(ll node, ll parent, vector<vector<ll>> &adj)
    {
        in[node] = timer++;
        par[node][0] = parent;
        for (int j = 1; j < LG; j++)
        {
            par[node][j] = par[par[node][j - 1]][j - 1];
        }
        for (auto child : adj[node])
        {
            if (parent == child)
                continue;

            dfs(child, node, adj);
        }
        out[node] = timer++;
    }
    ll getKth(ll node, ll k)
    {
        for (ll j = 0; j < LG; j++)
        {
            if ((k >> j) & 1)
            {
                node = par[node][j];
            }
        }
        return node;
    }
    bool isPar(ll p, ll v)
    {
        return in[p] <= in[v] && out[p] >= out[v];
    }
    LCA(ll rooti, ll ni, vector<vector<ll>> &adj)
    {
        root = rooti;
        n = ni;
        par.resize(n + 1, vector<ll>(LG));
        in.resize(n + 1);
        out.resize(n + 1);
        dist.resize(n + 1, INF);

        dfs(root, root, adj);
        bfs(adj);
    }
    ll getLCA(ll u, ll v)
    {
        if (isPar(u, v))
        {
            return u;
        }
        for (ll i = LG - 1; i >= 0; i--)
        {
            if (!isPar(par[u][i], v))
            {
                u = par[u][i];
            }
        }
        return par[u][0];
    }
};

void tc()
{

    ll n;
    cin >> n;
    vector<vector<ll>> adj(n + 1);
    ll m = n - 1;
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    LCA lca(1, n, adj);
    ll q;
    cin >> q;
    while (q--)
    {
        ll redLCA = -1, blueLCA = -1;
        ll r, b;
        cin >> r >> b;
        vector<ll> reds;
        vector<ll> blues;

        while (r--)
        {
            ll rj;
            cin >> rj;
            reds.push_back(rj);
            if (redLCA == -1)
            {
                redLCA = rj;
            }
            else
            {
                redLCA = lca.getLCA(rj, redLCA);
            }
        }

        while (b--)
        {
            ll bj;
            cin >> bj;
            blues.push_back(bj);
            if (blueLCA == -1)
            {
                blueLCA = bj;
            }
            else
            {
                blueLCA = lca.getLCA(bj, blueLCA);
            }
        }
        bool one = 0, two = 0;
        for (auto x : reds)
        {
            if (lca.isPar(blueLCA, x))
            {
                one = 1;
            }
        }
        for (auto x : blues)
        {
            if (lca.isPar(redLCA, x))
            {
                two = 1;
            }
        }

        if ((one && two))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
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