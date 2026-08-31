#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

bool isPrime(int x )
{
    for ( int i = 2 ; i < x ; i++ )
    {
        if( x%i == 0 )
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n ;
    cin >> n ;
    int arr[n] ;
    long long sum = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] , sum += arr[i] ;
    }
    if ( isPrime(sum))
        cout << "1" ;
    else{
        for ( int i = 2 ; i < n ; i++ )
        {
            if ( sum%i == 0 )
            {
                cout << sum/i ;
                break ;
            }
        }
    }
    return 0;
}
