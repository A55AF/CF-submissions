#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , cnt = 0;
    cin>>n;
    for ( int i = 1 ; i < n ; ++i ){
        if ( i % 2 == 0 ){
        cout << i << endl ;
        cnt++;
        } 
    }
    if ( n % 2 == 0 ){
        cout << n ;
        return 0;
    }
    if ( cnt == 0 && n % 2 != 0 ){
        cout << "-1" ;
        return 0;
    }
    return 0;
}