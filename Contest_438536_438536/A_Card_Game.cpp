#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while ( t-- ){
        int n , k1 , k2 , mx1 = INT_MIN, mx2 = INT_MIN;
        cin >> n >> k1 >> k2 ;
        int arr1[k1] , arr2[k2] ;
        for ( int i = 0 ; i < k1 ; i++ ){
            cin >> arr1[i] ;
            if ( arr1[i] > mx1 )
                mx1 = arr1[i] ;
        }
        for ( int j = 0 ; j < k2 ; j++ ){
            cin >> arr2[j] ;
            if ( arr2[j] > mx2 )
                mx2 = arr2[j] ;
        }
        if ( mx1 > mx2 ){
            cout << "YES\n";
        }
        else{
            cout << "NO\n" ;
        }
    }
    return 0;
}
