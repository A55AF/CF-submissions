#include <bits/stdc++.h>
using namespace std;

double avg( double arr[] , int sz )
{
    double sum = 0;
    for ( int i = 0 ; i < sz ; i++ )
        sum += arr[i];
    return sum / sz;
}

int main()
{
    cout << fixed << setprecision(7); 
    int n ;
    cin >> n ;
    double arr[n] ;
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i] ;
    cout << avg(arr,n) ;
    return 0;
}