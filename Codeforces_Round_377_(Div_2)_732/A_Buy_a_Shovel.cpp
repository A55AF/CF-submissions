#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int k, r;
    cin >> k >> r ;
    int ans = 0;
    for ( int i = 1 ; i <= 10 ; i++ ) {
        ans = i;
        if ( (k * i) % 10 == 0 || ((k * i) % 10) == r ) 
            break;
    }
    cout << ans ;
    return 0;
}