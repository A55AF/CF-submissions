#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0) ;
    int n, a, b ;
    cin >> n >> a >> b ;
    long long sum = 0 ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        long long x = i, subsum = 0;
        while ( x != 0 )
        {
            subsum += (x%10);
            x /=10;
        }
        if ( subsum >= a && subsum <= b )
            sum += i ;
    }
    cout << sum ;
    return 0;
}
