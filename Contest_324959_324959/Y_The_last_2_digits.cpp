#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long a , b , c , d , result;
    cin >> a >> b >> c >> d ;
    if ( a > 100 && b > 100 && c > 100 && d > 100 ){
        result = (a % 100) * (b % 100) * (c % 100) * (d % 100);
        result = result % 100;
        if ( result < 10 ){
            cout << "0";
        }
        cout << result ;
        return 0;
    }
    result = a * b * c * d;
    result = result % 100;
        if ( result < 10 ){
            cout << "0";
        }
    cout << result ;
    return 0;
}