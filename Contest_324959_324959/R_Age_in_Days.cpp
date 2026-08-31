#include<iostream>
using namespace std;
int main(){
    int x , y = 0, d = 0 , m = 0;
    cin >> x ;
    while ( x >= 365 ){
        x = x - 365 ;
        ++y;
    }
    while ( x >= 30 ){
        x = x - 30;
        ++m;
    }
    d = x;
    cout << y << " years\n";
    cout << m << " months\n";
    cout << d << " days";
    return 0;
}