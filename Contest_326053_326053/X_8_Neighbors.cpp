#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m ;
    char arr[n][m];
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < m ; j++ ){
            cin >> arr[i][j] ;
        }
    }
    int l , r ;
    cin >> l >> r ;
    l--; r--;
    bool check_neighbors = true;
    for ( int i = l - 1 ; i <= (l + 1) ; i++ ){
        for ( int j = r - 1 ; j <= (r + 1) ; j++ ){
            if ( i < 0 || j < 0 || i >= n || j >= m )
                continue;
            if ( i == l && j == r )
                continue;
            if ( arr[i][j] == '.' )
                check_neighbors = false;
        }
    }
    if ( check_neighbors == true )
        cout << "yes" ;
    else if ( check_neighbors == false)
        cout << "no" ;
    return 0;
}