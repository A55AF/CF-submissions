#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        long long n ,odd_num = 0;
        cin >> n ;
        for ( int i = 0 ; i < n ; i++ )
        {
            long long x ;
            cin >> x ;
            odd_num = (odd_num^x);
        }
        cout << odd_num << "\n" ;
    }
    return 0;
}