#include<bits/stdc++.h>
using namespace std;

long long equation( int x , int n )
{
    int i = 2;
    long long res = 0;
    while ( i <= n )
    {
        res += pow(x,i);
        i += 2;
    }
    return res;
}

int main()
{
    int x , n;
    cin >> x >> n ;
    cout << equation(x,n);
    return 0;
}
