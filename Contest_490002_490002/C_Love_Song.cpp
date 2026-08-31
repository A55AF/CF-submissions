#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , q ;
    cin >> n >> q ;
    long long prfx[n] = {0};
    string s ;
    cin >> s ;
    prfx[0] += (s[0] - 'a') + 1;
    for ( int i = 1 ; i < n ; i++ )
    {
        prfx[i] += prfx[i-1] ;
        prfx[i] += (s[i] - 'a' ) + 1;
    }
    while ( q-- )
    {
        int l , r ;
        cin >> l >> r ;
        if ( l != 1 )
            cout << prfx[r-1] - prfx[l-2] << "\n";
        else
            cout << prfx[r-1] << "\n" ;
    }
    return 0;
}