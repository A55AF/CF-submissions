#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m ;
    int points[m] ;
    long long sum = 0 ;
    char answer[n+1][m+1] ;
    int frq[5][m] ;
    for ( int i = 0 ; i < 5 ; i++ ){
        for ( int j = 0 ; j < m ; j++ ) {
            frq[i][j] = 0;
        }
    }
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < m ; j++){
            cin >> answer[i][j] ;
            frq[(answer[i][j]-'A')][j]++;
        }
    }
    for ( int i = 0 ; i < m ; i++ )
        cin >> points[i] ;
    for ( int j = 0 ; j < m ; j++ )
    {
        int mx = -10;
        for( int i = 0 ; i < 5 ; i++) {
            mx = max(mx, frq[i][j]) ;
        }
        sum =sum + ( mx * points[j] ) ;
    }
    cout << sum ;
    return 0;
}
