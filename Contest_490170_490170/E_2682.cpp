#include <bits/stdc++.h>
using namespace std;

long long fpow(long long x, long long n, long long mod)
{
    long long result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            result = ((result % mod) * (x % mod)) % mod;
        x = ((x % mod) * (x % mod)) % mod;
        n = n / 2;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, p;
        cin >> x >> p;
        cout << fpow(x, p, 100) << "\n";
    }
    return 0;
}