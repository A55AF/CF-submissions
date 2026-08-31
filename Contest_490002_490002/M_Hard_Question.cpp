#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x ;
    double n , m ;
    cin >> x >> n >> m ;
    switch ( x )
    {
        case 'N' :
            cout << ceil((n*m)/2);
            break;
        case 'Q' :
            cout << min(n,m) ;
            break;
        case 'K' :
            cout << ceil(n/2) * ceil( m /2 ) ;
            break;
    }
    return 0;
}
