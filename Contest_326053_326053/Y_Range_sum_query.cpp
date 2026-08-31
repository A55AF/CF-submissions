#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , q;
    cin >> n >> q ;
    long long arr[n] ;
    long long srr[n];
    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
        if ( i == 0 )
            srr[i] = arr[i];
        else
            srr[i] = srr[i-1] + arr[i];
    }
    while ( q-- ){
        int l , r;
        cin >> l >> r;
        l--; r--;
        long long result = (srr[r] - srr[l] ) + arr[l] ;
        cout << result << "\n";
    }
    return 0;
}