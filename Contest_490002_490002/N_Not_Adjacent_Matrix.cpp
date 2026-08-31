#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while ( t-- ){
        int n ;
        cin >> n ;
        int arr[n][n] ;
        if ( n == 2 )
            cout << "-1\n" ;
        else
        {
            int x = n * n ;
            int l = (x / 2)+1 , r = 1 ;
            int cnt = 0 ;
            for ( int i = 0 ; i < n ; i++ )
            {
                for ( int j = 0 ; j < n ; j++ )
                {
                    if ( cnt  % 2 == 0 )
                        arr[i][j] = l , l++;
                    else
                        arr[i][j] = r , r++;
                    cnt++;
                }
            }
            for ( int i = 0 ; i < n ; i++ )
            {
                for ( int j = 0 ; j < n ; j++ ){
                    cout << arr[i][j] << " " ;
                }
                cout << "\n" ;
            }
        }
    }
    return 0;
}