#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n ; cin >> n ;
    if ( n%10 == 4 || n%10==7 )
        cout << "lucky " ;
    else
        cout << "unlucky " ;
    n%2 ? cout << "odd" : cout << "even";
    return 0;
}