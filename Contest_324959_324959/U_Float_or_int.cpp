#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float n ;
    cin >> n ;
    int cl = n + 1;
    cout << fixed << setprecision(3) ;
    float dc = n - (cl-1);
    if ( (cl - n) < 1 ){
        cout << "float " << cl - 1 << " " << dc ;
    }
    if ( (cl - n ) == 1 ){
        cout << "int " << cl - 1 ;
    }
    return 0;
}