#include<bits/stdc++.h>
using namespace std;
const int N = 2e6+20 ;
int main()
{
    int n , mx_frq = 1;
    cin >> n ;
    int arr[n] , frq[N] = {0};
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
        frq[arr[i]]++;
        if (frq[arr[i]] > mx_frq)
            mx_frq = frq[arr[i]];
    }
    int mn = 2e7 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( frq[arr[i]] == mx_frq && arr[i] < mn )
        {
            mn = arr[i] ;
        }
    }
    cout << mn ;
    return 0;
}
