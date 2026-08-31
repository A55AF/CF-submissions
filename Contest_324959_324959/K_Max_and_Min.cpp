#include<iostream>
using namespace std;
int main()
{
    long long a , b , c , mx , mn;
    cin >> a >> b >> c ;
    mx = a;
    mn = a;
    for ( int i = 0 ; i < 3 ; ++i ){
        if ( mx < b ){
            mx = b;
        }else if ( mx < c ){
            mx = c ;
        }
        if ( mn > b ){
            mn = b;
        }else if ( mn > c ){
            mn = c;
        }
    }
    cout << mn << " " << mx ;
    return 0;
}
