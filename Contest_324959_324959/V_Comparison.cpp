#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a , b ;
    char x ;
    cin >> a >> x >> b ;
    if ( x == 60 ){
        if ( b > a ) {
            cout << "Right" ;
        }
        else {
            cout << "Wrong" ;
        }
    }
    if ( x == 61 ){
        if ( a == b ) {
            cout << "Right" ; 
        }
        else { 
            cout << "Wrong" ;
        }
    }
    if ( x == 62 ){
        if ( a > b ){
            cout << "Right" ;
        }
        else {
            cout << "Wrong" ;
        }
    }
    return 0;
}