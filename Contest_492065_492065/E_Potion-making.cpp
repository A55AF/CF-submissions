#include <bits/stdc++.h>
using namespace std;

void always_max(long long &x, long long &y)
{
    if (x < y)
        swap(x, y);
}

long long lcm(long long x, long long y)
{
    return (x * y) / gcd(x, y);
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int n1 = k / gcd(k, 100) , n2 = (100 - k)/gcd((100 - k),100);
        int res = n1 + n2 ;
        cout << res << "\n" ;
    }
    return 0;
}