#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int frq[26] {0};
    for ( int i = 0 ; i < n ; i++ )
    {
        char c;
        cin >> c;
        frq[c - 97]++;
    }
    for ( int i = 0 ; i < 26 ; i++ )
    {
        if ( frq[i] == 0 )
            continue;
        else
        {
            while ( frq[i]-- )
            {
                cout << char(i + 97) ;
            }
        }
    }
    return 0;
}
