#include <iostream>

using namespace std;

int main()
{
    long long n , m , digit_n , digit_m ;
    cin >> n >> m ;
    if ( n < 0 || m < 0 ){
        return 0;
    }
    digit_n = n % 10 ;
    digit_m = m % 10 ;
    cout << (digit_n + digit_m) ;
    return 0;
}
