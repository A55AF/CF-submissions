#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , cnt = 0;
    cin >> n ;
    long long a[n] , b[n];
    for ( int i = 0 ; i < n ; i++ )
        cin >> a[i] ;
    for ( int j = 0 ; j < n ; j++ )
        cin >> b[j] ;
    for ( int i = 0 ; i < n ; i++ ){
        for ( int x = 0 ; x < n ; x++ ){
            if ( a[i] == b[x] ){
                b[x] = 0;
                cnt++;
                break;
            }
        }
    }
    cnt == n ? cout << "yes" : cout << "no" ;
    return 0;
}