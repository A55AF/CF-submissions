#include <bits/stdc++.h>
long long mod = 1e9 + 7;
long long fo, c, p;
long long F(int x)
{
    if (x == 0)
        return (fo % mod);
    return ((((F(x - 1) % mod) + (c % mod)) % mod) * (p % mod)) % mod;
}

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int q, x;
    cin >> q;
    while (q--)
    {
        cin >> fo >> c >> p >> x;
        cout << F(x) << "\n";
    }
    return 0;
}
