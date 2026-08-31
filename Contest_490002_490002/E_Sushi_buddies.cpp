#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 ;

int main()
{
    int n ;
    cin >> n ;
    int arr[n] , frq[N] = {0};
    long long product = 1 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
        frq[arr[i]] = 1 ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( frq[arr[i]] == 1 )
            product *= arr[i] , frq[arr[i]] = 0;
    }
    cout << product ;
    return 0;
}