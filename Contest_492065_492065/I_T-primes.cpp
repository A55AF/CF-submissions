#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    for (int i = 2; 1LL * i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    if (n == 1)
        return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n ;
    cin >> n ;
    long long arr[n] ;
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        double x = sqrt(arr[i]) ;
        long long xx=sqrt(arr[i]);
        if (  x==xx && isPrime (xx))
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }
    return 0;
}