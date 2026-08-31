#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , mp = 0;
    cin >> n ;
    for ( int i = 1 ; i <= 11 ; ++i ){
        mp = i * n;
        cout << n << " * " << i << " = " << mp << endl;
    }
    mp = n * 12;
    cout << n << " * " << 12 << " = " << mp << endl;
    return 0;
}