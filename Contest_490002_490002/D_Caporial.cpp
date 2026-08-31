#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long fact( long long n)
{
    long long res = 1 ;
    for ( int i = 1 ; i <= n ; i++ )
        res = ((res%mod)*(i%mod))%mod;
    return res;
}
int main()
{
    char a , b ;
    cin >> a >> b ;
    long long x = a , y = b ;
    long long res = ((fact(y)%mod) - (fact(x)%mod)+mod)%mod ;
    cout << res ;
    return 0;
}
