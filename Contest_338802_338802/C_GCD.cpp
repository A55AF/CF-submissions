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
long long lcm( long long x , long long y )
{
    return (x/gcd(x,y))*y;
}

int main()
{
    long long a , b ;
    cin >> a >> b ;
    cout << gcd(a,b) << " " << lcm(a,b) ;
    return 0;
}