#include <bits/stdc++.h>
using namespace std;

void times(int n , char c )
{
    for ( int i = 0 ; i < n ; i++ )
        cout << c << " " ;
}

int main()
{
    int t ;
    cin >> t ;
    int n ;
    char c ;
    while ( t-- )
    {
        cin >> n >> c ;
        times(n,c);
        cout << "\n" ;
    }
    return 0;
}