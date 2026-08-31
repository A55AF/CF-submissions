#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    array<int,4> player;
    int w1 , w2 , l1 , l2 ;
    cin>>t;
    while ( t-- ){
        cin >> player[0] >> player[1] >> player[2] >> player[3] ;
        w1 = max(player[0] , player[1] );
        w2 = max(player[2] , player[3] );
        l1 = min(player[0] , player[1] );
        l2 = min(player[2] , player[3] );
        if ( w1 > l2 && w1 > l1 && w1 < w2 ) {
            cout << "YES\n" ;
        }
        else if ( w2 > l2 && w2 > l1 && w2 < w1 ){
            cout << "YES\n" ;
        }
        else {
            cout << "NO\n" ;
        }
    }
    return 0;
}