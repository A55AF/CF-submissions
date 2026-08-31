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
const long long mod = 998244353;
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

void tc()
{
    string s1, s2;
    cin >> s1 >> s2;

    bool good = 0;
    ll v1 = 0, v2 = 0, v3 = 0, v4 = 0;

    for (ll i = 0; i < s1.size(); i++)
    {
        /* code */
        int val = 0;
        if (s1[i] == '#' && s2[i] == '.')
        {
            v1++;
        }
        if (s1[i] == '#' && s2[i] == '#')
        {

            good = 1;
            v2++;
        }
        else if (s1[i] == '.' && s2[i] == '#')
        {
            v3++;
        }
        else if (s1[i] == '.' && s2[i] == '.')
        {
            v4++;
        }
    }
    if (good || (v1 == 0 || v3 == 0))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
        return;
    }
    string one, two;
    while (v1--)
    {
        one.push_back('#');
        two.push_back('.');
    }
    while (v2--)
    {
        one.push_back('#');
        two.push_back('#');
    }

    while (v3--)
    {
        one.push_back('.');
        two.push_back('#');
    }

    while (v4--)
    {
        one.push_back('.');
        two.push_back('.');
    }
    cout << one << "\n"
         << two;
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