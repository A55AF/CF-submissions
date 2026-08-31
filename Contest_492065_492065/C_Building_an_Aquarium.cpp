#include <bits/stdc++.h>

typedef long long ll;
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define loop(n) for (int i = 0; i < n; i++)
#define rall(a) a.rbegin(), a.rend()
#define all(a) a.begin(), a.end()
#define pf push_front
#define pb push_back
#define f(p) p.first
#define s(p) p.second
#define sz(x) x.size()

using namespace std;

void in_v(vector<int> &v, int sz)
{
    loop(sz)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void out_v(vector<int> &v, int sz)
{
    loop(sz) cout << v[i] << " ";
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v;
    loop(n)
    {
        ll z;
        cin >> z;
        v.pb(z);
    }
    ll l = 1, r = 1e12, h = 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll w = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < mid)
            {
                w += (mid - v[i]);
            }
        }
        if (w <= x )
            h = max(h, mid), l = mid + 1;
        else
            r = mid - 1;
    }
    cout << h;
}

int main()
{
    FIO int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}