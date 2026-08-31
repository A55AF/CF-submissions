#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , mx = INT_MIN , mx_idx;
    cin >> n ;
    int numbers[n];
    for ( int i = 0 ; i < n ; i++ ){
        cin >> numbers[i] ;
        if ( numbers[i] > mx ){
            mx = numbers[i] ;
            mx_idx = i + 1;
        }
        else if ( numbers[i] == mx ){
            mx_idx = i + 1;
        }
    }
    cout << mx << " " << mx_idx ;
    return 0;
}