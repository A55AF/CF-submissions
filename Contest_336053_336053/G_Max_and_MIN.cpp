#include <bits/stdc++.h>
using namespace std;

void max_min( int arr[] , int sz)
{
    pair<int,int> mx_mn(INT_MIN,INT_MAX);
    sort(arr,arr+sz);
    mx_mn.first = arr[sz-1];
    mx_mn.second = arr[0];
    cout << mx_mn.second << " " << mx_mn.first ;
}

int main()
{
    int n ;
    cin >> n ;
    int array[n];
    for ( int i = 0 ; i < n ; i++ )
        cin >> array[i] ;
    max_min(array,n);
    return 0;
}