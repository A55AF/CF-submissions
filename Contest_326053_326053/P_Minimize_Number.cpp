#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool odd_check( int array[] , int n ){
    int cnt = 0;
    for ( int i = 0 ; i < n ; i++ ){
        if ( array[i] % 2 == 0 )
            cnt++;
    }
    if ( cnt == n )
        return true;
    else
        return false;
}

int main(){
    int n , op = 0;
    cin >> n;
    int arr[n];
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i] ;
    while ( odd_check( arr , n ) == true ){
        op++;
        for ( int i = 0 ; i < n ; i++ ){
            arr[i] /= 2;
        }
    }
    cout << op ;
    return 0;
}