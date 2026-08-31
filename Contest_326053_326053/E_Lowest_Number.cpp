#include<iostream>
using namespace std;

int main(){
    int n , position , min;
    cin >> n ;
    int a[n];
    cin >> a[0] ;
    position = 1 ;
    min = a[0];
    for ( int i = 1 ; i < n ; ++i ){
        cin >> a[i] ;
        if ( a[i] < min ){
            min = a[i];
            position = i + 1;
        }
        else {
            continue;
        }
    }
    cout << min << " " << position ;
    return 0;
}