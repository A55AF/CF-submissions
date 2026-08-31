#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n , result = 0;
    cin >> n ;
    long long arr[n] ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
        result += arr[i] ;
    }
    cout << abs(result) ;
    return 0;
}