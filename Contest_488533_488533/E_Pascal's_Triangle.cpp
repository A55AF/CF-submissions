#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void always_max(ll &x, ll &y)
{
    if (x < y)
        swap(x, y);
}

ll gcd(ll x, ll y)
{
    while (y != 0)
    {
        x %= y;
        always_max(x, y);
    }
    return x;
}

ll comb(ll n, ll r)
{
    ll a = 1, b = 1 ;
    r = min(r,n-r);
    while ( r != 0 )
    {
        a*=n,b*=r;
        ll g = gcd(a,b);
        a/=g,b/=g;
        n--,r--;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fixed << comb(i,j) << " " ;
        }
        cout << "\n";
    }
    return 0;
}
