#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , mn = INT_MAX , cnt = 0;
    cin >> n ;
    int arr[n];
    for ( int i = 0 ; i < n ; ++i ){
        cin >> arr[i] ;
        mn = min(arr[i],mn);
    }
    for ( int i = 0 ; i < n ; ++i ){
        if (mn == arr[i]){
            cnt++;
        }
    }
    if ( cnt % 2 == 0 ){
        cout << "Unlucky";
    }
    else {
        cout << "Lucky";
    }
    return 0;
}