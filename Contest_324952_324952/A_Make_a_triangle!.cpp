#include <iostream>
using namespace std;
int main()
{
    int a, b, c ,cnt = 0;
    cin >> a >> b >> c;
    while ( true ){
    if ( a + b > c && a + c > b && c + b > a) {
        cout << cnt ;
        break;
    }
    else {
        if (a + b <= c) {
            if (a < b) {
                ++a;
            }
            else {
                ++b;
            }
            ++cnt;
        }
        else if (a + c <= b) {
            if (a < c) {
                ++a;
            }
            else {
                ++c;
            }
            ++cnt;
        }
        else {
            if (b < c) {
                ++b;
            }
            else {
                ++c;
            }
            ++cnt;
        }
    }
    }
    return 0;
}