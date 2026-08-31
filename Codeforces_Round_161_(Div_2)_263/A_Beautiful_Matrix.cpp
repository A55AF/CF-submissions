#include<bits/stdc++.h>
using namespace std;

int main() {
    int x , y ;
    for ( int i = 0 ; i < 5 ; i++ ) {
        for ( int j = 0; j < 5 ; j++ ) {
            int inp;
            cin >> inp;
            if ( inp )x = i , y = j;
        }
    }
    int ans = abs(x-2) + abs(y-2);
    cout << ans ;
    return 0;
}