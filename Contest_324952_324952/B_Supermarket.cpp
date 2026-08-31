#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << fixed << setprecision(8);
    int n , m;
    cin >> n >> m ;
    double a , b;
    double mn = 100 ;
    for ( int i = 0 ; i < n ; ++i ){
        cin >> a >> b ;
        if ( mn > (a/b) )
            mn = a/b;
            else
                continue;
    }
    cout << mn * m;
    return 0;
}
