#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , q ;
    cin >> n >> q ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i] ;
    while ( q-- ){
        int k , mx = -1;
        cin >> k ;
        int l = 0, r = n-1;
        while ( l<=r ){
            int mid = (l+r)/2;
            int val = arr[mid] ;
            if ( val > k )
                mx = val , r  = mid - 1;
            else if ( val <= k ){
                l = mid + 1 ;
            }
        }
        cout << mx << "\n" ;
    }
    return 0;
}