#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n , q ;
    cin >> n >> q;
    int arr[3][n] ,frq[120] = {0};
    for ( int i = 0 ; i < 3 ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            cin >> arr[i][j] ;
            frq[arr[i][j]]++;
        }
    }
    while ( q-- )
    {
        int id ;
        cin >> id ;
        cout << frq[id] <<"\n" ;
    }
    return 0;
}