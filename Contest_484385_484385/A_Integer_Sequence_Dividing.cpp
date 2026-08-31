#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    if ( n % 2 != 0 )
    {
        n++;
        if ( (n/2)%2 == 0 )
            cout << "0" ;
        else
            cout << "1" ;
    }
    else
    {
        if ( (n/2)%2 == 0 )
            cout << "0" ;
        else
            cout << "1" ;
    }
    return 0;
}
