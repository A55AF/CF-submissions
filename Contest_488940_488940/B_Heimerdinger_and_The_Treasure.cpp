#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m, sr = 0, sc = 0, er = 0, ec = 0;
    cin >> n >> m ;
    char arr[n+2][m+2];
    for ( int i = 0 ; i <  n+2 ; i++ )
    {
        for ( int j = 0 ; j < m+2 ; j++ )
        {
            arr[i][j] = '.';
        }
    }
    for ( int i = 1 ; i <= n ; i++ )
    {
        for ( int j = 1 ; j <= m ; j++ )
        {
            cin >> arr[i][j] ;
            if ( arr[i][j] == 'S' )
                sr = i,sc = j;
            if ( arr[i][j] == 'O' )
                er = i,ec = j;
        }
    }
    while ( sc != ec || sr != er  )
    {
        cout << sr << " " << sc << "\n" ;
        if ( arr[sr+1][sc] == '*' || arr[sr+1][sc] == 'O' )
            sr++;
        else if ( arr[sr-1][sc] == '*' || arr[sr-1][sc] == 'O' )
            sr--;
        else if ( arr[sr][sc+1] == '*' || arr[sr][sc+1] == 'O' )
            sc++;
        else if ( arr[sr][sc-1] == '*' || arr[sr][sc-1] == 'O' )
            sc--;
        arr[sr][sc] = '.' ;
    }
    cout << er << " " << ec ;
    return 0;
}
