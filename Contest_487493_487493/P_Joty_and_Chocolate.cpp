#include <bits/stdc++.h>
using namespace std;

void always_max(long long &x, long long &y)
{
    if (x < y)
        swap(x, y);
}
long long gcd(long long x, long long y)
{
    while (y != 0)
    {
        x %= y;
        always_max(x, y);
    }
    return x;
}
long long lcm(long long x, long long y)
{
    return (x * y) / gcd(x, y);
}

int main()
{
    long long n, a, b, p, q, sum = 0;
    cin >> n >> a >> b >> p >> q;
    sum = (n/a)*p + (n/b)*q - (n/lcm(a,b))*min(p,q);
    cout << sum ;
    return 0;
}