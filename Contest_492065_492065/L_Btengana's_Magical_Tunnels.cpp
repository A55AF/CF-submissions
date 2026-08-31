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
    int n ;
    cin >> n ; 
    int arr[n] , prfx[n];
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i] , prfx[i] = arr[i];
    for ( int i = 1 ; i < n ; i++ )
        prfx[i] += prfx[i-1] ;
    int m ;
    cin >> m ;
    vector<pair<int,int>> v;
    for ( int i = 0 ; i < m ; i++ )
    {
        pair<int,int> p ;
        cin >> p.first >> p.second ;
        v.push_back(p) ;
    }
    int mn = 1e8+200;
    for ( int i = 0 ; i < m ; i++ )
    {
        int l = v.at(i).first - 1, r = v.at(i).second - 1 ;
        int sum = prfx[r];
        if ( l != 0 )
            sum -= prfx[l-1] ;
        mn = min((prfx[n-1] - sum) , mn );
    }
    cout << mn ;
    return 0;
}