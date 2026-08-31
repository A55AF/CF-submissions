#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while ( t-- )
    {
        ll n , cnt = 0;
        cin >> n ;
        for ( int x = 0 ; x <= 708 ; x++ )
        {
            for ( int y = 0 ; y <= 70 ; y++ )
            {
                for ( int z = 0 ; z <= 23 ; z++ )
                {
                    if ( 2*x*x+ 3*y*y*y + 4*z*z*z*z <= n )
                        cnt++;
                }
            }
        }
        cout << cnt << "\n" ;
    }
    return 0;
}
