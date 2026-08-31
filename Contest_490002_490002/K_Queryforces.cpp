#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n , m ;
    cin >> n >> m ;
    long long r[n][m] , c[n][m] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            r[i][j] = 0, c[i][j] = 0;
        }
    }
    int q ;
    cin >> q;
    while ( q-- )
    {
        char s ;
        cin >> s ;
        int z , L , R ;
        cin >> z >> L >> R ;
        long long x;
        cin >> x ;
        L--,R--,z--;
        if ( s == 'R' )
        {
            r[z][L] += x;
            if ( R < m-1 )
                r[z][R+1] -= x;
        }
        else
        {
            c[L][z] += x;
            if ( R < n-1 )
                c[R+1][z] -= x;
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 1 ; j < m ; j++ )
        {
            r[i][j] += r[i][j-1];
        }
    }
    for ( int j = 0 ; j < m ; j++ )
    {
        for ( int i = 1 ; i < n ; i++ )
        {
            c[i][j] += c[i-1][j];
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            r[i][j] += c[i][j] ;
        }
    }
    long long mx = LONG_LONG_MIN ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            if (  r[i][j] > mx )
                mx  = r[i][j];
        }
    }
    cout << mx ;
    return 0 ;
}
