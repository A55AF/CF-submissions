#include <bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define f(a) a.first
#define s(a) a.second
#define pb push_back
#define print(x)           \
    for (auto it : x)      \
    {                      \
        cout << it << " "; \
    }
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

const ll mod = 1e9 + 7;

void accepted()
{
    ll x;
    cin >> x;
    ll area = 1;
    ll z;
    area %= mod;
    for (int i = 2, z = 1LL * 4; i <= x; i++, z = ((z % mod) * (4 % mod)) % mod)
    {
        area = ((area % mod) + (z % mod)) % mod;
        // cout << "z = " << z << "area = " << area << "\n";
    }
    cout << area;
}

int main()
{
    ASSAF;
    int t = 1;
    cin >> t;
    while (t--)
    {
        accepted();
        cout << "\n";
    }
    return 0;
}