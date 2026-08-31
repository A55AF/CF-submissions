#include<iostream>
using namespace std;
int main(){
    int n , x , count = 0;
    cin >> n ;
    int a[n];
    for ( int i = 0 ; i < n ; ++i ){
        cin >> a[i] ;
    }
    cin >> x ;
    for ( int z = 0 ; z < n ; ++z ){
        if ( a[z] == x ){
            count++;
            cout << z ;
            break ;
        }
    }
    if ( count == 0 ){
        cout << "-1" ;
    }
    return 0;
}