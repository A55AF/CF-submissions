#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n , cnt = 0;
        cin >> n ;
        int x ;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> x ;
            if ( x % 2 == 0 || x % 3 == 0 )
                cnt++;
        }
        cout << cnt << "\n" ;
    }
    return 0;
}
