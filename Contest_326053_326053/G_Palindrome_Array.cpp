#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }
    bool valid = true;
    for( int i = 0 ; i < n/2 ; i++ ) {
        if (arr[i] != arr[n - i - 1]) {
            valid = false;
            break;
        }
    }
    if( valid ) cout << "YES" ;
    else cout << "NO";
    return 0;
}