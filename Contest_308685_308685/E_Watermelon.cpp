#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w , l , r;
    cin >> w ;
    r = 2;
    l = w - r;
    bool check = false;
    while( l > 0 )
    {
        if ( r % 2 == 0 && l % 2 == 0 )
        {
            check = true;
            break;
        }
        l -= 2;
        r += 2;
    }
    if ( check )
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
}