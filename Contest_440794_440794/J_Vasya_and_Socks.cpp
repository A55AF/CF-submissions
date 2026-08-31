#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m , days = 1;
    bool check_pairs = false;
    cin >> n >> m;
    while ( true ){
        n--;
        if ( n == 0 )
            break;
        days++;
        if ( days % m == 0 ) {
            n++;
        }
    }
    cout << days ;
    return 0;
}