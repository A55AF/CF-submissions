#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    long long arr[100] ;
    int size = 0;
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( n % i == 0 )
        {
            arr[size] = i;
            size++;
        }
    }
    cout << size << "\n" ;
    for ( int i = 0 ; i < size ; i++ )
        cout << arr[i] << " ";
    return 0;
}
