#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    long long r , first_sold = 0 , last_sold = 0 , num_of_sold = 0;
    cin >> n >> r ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        long long rs;
        cin >> rs ;
        if ( r == rs )
        {
            if ( first_sold == 0 )
                first_sold = i;
            last_sold = i;
            num_of_sold++;
        }
    }
    if ( num_of_sold == 0 )
        cout << "-1" ;
    else
        cout << first_sold << " " << last_sold << " " << num_of_sold ;
}
