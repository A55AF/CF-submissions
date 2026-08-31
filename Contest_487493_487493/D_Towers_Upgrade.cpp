#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a , b , c , mod = 1e9 + 7;
    cin >> a >> b >> c ;
    a %= mod;
    b %= mod;
    c %= mod;
    long long diff = abs(a-b),power_a = a,power_b = b,power_c = c;
    for ( int i = 0 ; i < b-1 ; i++ )
        a = (a*power_a)%mod;
    for ( int i = 0 ; i < power_a-1 ; i++ )
        b = (b*power_b)%mod;
    for ( int i = 0 ; i < diff-1 ; i++ )
        c = (c*power_c)%mod;
    if ( diff == 0 )
        c = 1;
    long long tower[] {a,b,c};
    sort(tower,tower+3);
    cout << tower[0] << " " << tower[1] << " " << tower[2] ;
    return 0;
}