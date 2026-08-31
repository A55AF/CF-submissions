#include<iostream>
using namespace std;
     
int main(){
    int t;
    cin >> t ;
    for ( int x = 0 ; x < t ; ++x ){
        int n , mn = 10000000;
        cin >> n ;
        int a[n];
        for ( int z = 0 ; z < n ; ++z ){
            cin >> a[z] ;
        }
        for ( int i = 0 ; i < n ; ++i ){
            for ( int j = i + 1 ; j < n ; ++j ){
                if ( (a[i] + a[j] + j - i ) < mn ){
                    mn = a[i] + a[j] + j - i ;
                }
            } 
        }
        cout << mn << "\n";
    }
    return 0;
}