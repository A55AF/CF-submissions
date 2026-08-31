#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t ;
    while ( t-- ){
        int n ;
        cin >> n ;
        int arr[n] ;
        for ( int i = 0 ; i < n ; i++ )
            cin >> arr[i] ;
        int mx = INT_MIN;
        int z = n - 1 , x = 0 , i = z ;
        while ( x != n ) {
            if ( i == x && z != x ) {
                if ( arr[i] > mx )
                    mx = arr[i];
                cout << mx << " ";
                mx = INT_MIN;
                z--;
                i = z;
                continue;
            }
            if ( i == x && z == x ){
                cout << arr[i] << " ";
                x++;
                z = n-1;
                i = z;
                mx = INT_MIN;
                continue;
            }
            if ( arr[i] > mx ) {
                mx = arr[i];
            }
            i--;
        }
        cout << "\n" ;
    }
    return 0;
}