#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    long long n , x , cnt = 0;
    cin >> n >> x ;
    long long arr[n] , prfx[n] = {0};
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }
    prfx[0] += arr[0];
    for ( int i = 1 ; i < n ; i++ )
        prfx[i] += prfx[i-1] + arr[i];
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = n-1 ; j > i ; j-- )
        {
            if ( (prfx[j] - prfx[i] )% x == 0 )
            {
                cnt++;
            }
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        if( prfx[i] % x == 0)
            cnt++;
    }
    cout << cnt ;
    return 0;
}