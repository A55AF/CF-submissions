#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , d , test_soldiers = 0;
    cin >> n >> d;
    int arr[n];
    for ( int i = 0 ; i < n ; ++i )
        cin >> arr[i] ;
    for ( int x = 0 ; x < n-1 ; ++x ){
        for ( int z = x + 1 ; z < n ; ++z ){
            if ( abs(arr[x] - arr[z]) <= d )
                test_soldiers++;
        }
    }
    for ( int y = n-1 ; y >= 1 ; --y ){
        for ( int u = y - 1 ; u >= 0 ; --u ){
            if ( abs(arr[y] - arr[u]) <= d )
                test_soldiers++;
        }
    }
    cout << test_soldiers ;
    return 0;
}
