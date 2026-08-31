#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s ;
    cin >> s ;
    bool c1 = false, c2 = true;
    if ( (s[n-1] -'0') % 2 == 0 )
        c1 = true;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( s[i] - '0' != 6 && s[i] - '0' != 3 && s[i] - '0' != 9 )
        {
            c2 = false;
            break;
        }
    }
    if ( c1 && c2 )
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
}