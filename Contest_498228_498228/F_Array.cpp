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

// Always max
void always_max(long long &x, long long &y)
{
    if (x < y)
        swap(x, y);
}
//---------------------------------------------------
// LCM
long long lcm(long long x, long long y)
{
    return (x * y) / gcd(x, y);
}
//---------------------------------------------------
// GCD
long long gcd(long long x, long long y)
{
    while (y != 0)
    {
        x %= y;
        always_max(x, y);
    }
    return x;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    in_v(v, n);
    set<int> s1, s2, s3;
    int pos = 0, neg = 0;
    loop(n)
    {
        if (v[i] < 0)
            neg++;
        else if (v[i] > 0)
            pos++;
    }
    int np = 0, nn = neg;
    if (pos == 0 && neg % 2 == 1)
        np = neg - 1;
    else if (pos != 0 && neg % 2 == 0)
        nn = neg - 1 ;
    else if (pos == 0 && neg % 2 == 0)
        nn = neg - 3 , np = 2;
    loop(n)
    {
        if (v[i] == 0)
            s3.insert(v[i]);
        else if (v[i] > 0)
            s2.insert(v[i]);
        else
        {
            if (s2.size() < np)
                s2.insert(v[i]), v[i] = 0;
            else if (s1.size() < nn)
                s1.insert(v[i]), v[i] = 0;
        }
    }
    loop(n)
    {
        if (v[i] < 0)
            s3.insert(v[i]);
    }
    cout << s1.size() << " ";
    for (auto it : s1)
        cout << it << " ";
    cout << "\n"
         << s2.size() << " ";
    for (auto it : s2)
        cout << it << " ";
    cout << "\n"
         << s3.size() << " ";
    for (auto it : s3)
        cout << it << " ";
}

int main()
{
    FIO int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        // cout << "\n";
    }
    return 0;
}