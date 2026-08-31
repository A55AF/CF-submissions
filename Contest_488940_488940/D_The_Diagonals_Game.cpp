#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n ;
    cin >> n ;
    int arr[n][n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for( int  j = 0 ; j < n ; j++ )
        {
            cin >> arr[i][j] ;
        }
    }
    int primary = 0 , secondary = 0 ;
    for  ( int i = 0 ; i < n ; i++ )
        primary += arr[i][i] ;
    for ( int i = n-1 , j = 0 ; j < n ; j++ , i-- )
        secondary += arr[i][j] ;
    cout << primary << " " << secondary ;
    return 0;
}
