#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    double a , b ;
    cin >> a >> b ;
    double dv = a / b ;
    cout << "floor " << a << " / " << b << " = " << floor(dv) << endl ;
    cout << "ceil " << a << " / " << b << " = " << ceil(dv) << endl ;
    cout << "round " << a << " / " << b << " = " << round(dv);
}
