#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    if ( b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 && a % 2 == 0 ){
        cout << "Accepted";
    }
    else {
        cout << "Error!";
    }
    return 0;
}