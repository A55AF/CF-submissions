#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t ;
    cin >> t;
    while ( t-- )
    {
        int n, m, cnt = 0;
        cin >> n >> m ;
        char arr[n+1][m+1];
        for ( int i = 0 ; i < n+1 ; i++ )
        {
            for ( int j = 0 ; j < m+1 ; j++ )
            {
                if ( j == m || i == n)
                    arr[i][j] = '0' ;
                else
                    cin >> arr[i][j] ;
            }
        }
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = 0 ; j < m ; j++ )
            {
                int x = i, y = j ;
                if ( x== n && y == m )
                    continue;
                while ( true )
                {
                    if ( arr[x][y] == 'C' )
                        break;
                    if ( arr[x][y] == 'R' )
                        y++;
                    else if ( arr[x][y] == 'D' )
                        x++;
                    if ( arr[x][y] == '0' )
                    {
                        if ( x == n )
                            x--;
                        if ( y == m )
                            y--;
                        if ( arr[x][y] == 'R' )
                            arr[x][y] = 'D';
                        else if ( arr[x][y] == 'D' )
                            arr[x][y] = 'R';
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << "\n" ;
    }
    return 0;
}
