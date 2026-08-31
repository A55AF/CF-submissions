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
    int n;
    cin >> n ; 
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    int mn = 1e7;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j  = i + 1 ; j < n ; j++ )
        {
            int g = gcd(arr[i],arr[j]);
            mn = min(abs((arr[i]/g)-(arr[j]/g)),mn);
        }
    }
    cout << mn ;
    return 0;
}