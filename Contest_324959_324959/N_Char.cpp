#include<iostream>
using namespace std;
int main()
{
    char x ;
    cin >> x ;
    if ( (int)x >= 65 && (int)x <= 90 ){
        x = x + 32 ;
    }
    else if ( (int)x >= 97 && (int)x <= 122 ){
        x = x - 32 ;
    }
    cout << x ;
    return 0;
}
