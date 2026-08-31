#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0) ;
    while ( true )
    {
        int n, m, sum = 0;
        cin >> n >> m ;
        if ( n > m )
            swap(n,m);
        if ( n <= 0 || m <= 0 )
            break;
        for ( int i = n ; i <= m ; i++ )
        {
            cout << i << " " ;
            sum += i ;
        }
        cout << "sum =" << sum << "\n";
        sum = 0 ;
    }
    return 0;
}
