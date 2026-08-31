#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int a[n];
    for ( int i = n-1 ; i >= 0 ; --i ){
        cin >> a[i] ;
    }
    for ( int z = 0 ; z < n ; ++z ){
        cout << a[z] << " " ;
    }
    return 0;
}