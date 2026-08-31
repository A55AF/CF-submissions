#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n , k ;
    ll mx = 0;
    cin >> n >> k ;
    int arr[n][n];
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            cin >> arr[i][j] ;
        }
    }
    for ( int i = 0 ; i < (n+1-k) ; i++ )
    {
        for ( int j = 0 ; j < (n+1-k) ; j++ )
        {
            ll sum = 0 ;
            for ( int x = 0 + i ; x < k + i ; x++ )
            {
                for ( int y = 0 + j ; y < k + j ; y++ )
                {
                    sum += arr[x][y];
                }
            }
            if ( sum > mx )
                mx = sum;
        }
    }
    cout << mx ;
    return 0;
}
