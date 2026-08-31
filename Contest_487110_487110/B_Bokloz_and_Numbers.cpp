#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    long long mx = LONG_LONG_MIN;
    cin >> n;
    while(n--)
    {
        long long x ;
        cin >> x ;
        if ( x > mx )
            mx = x ;
    }
    cout << mx ;
    return 0;
}