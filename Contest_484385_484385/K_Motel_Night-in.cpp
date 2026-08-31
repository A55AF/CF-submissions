#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s , d ;
    cin >> d >> s ;
    s >= (2*d/3) ? cout << "Sunny Day" : s <= (d/3) ? cout << "Rainy Day" : cout << "Cloudy Day";
    return 0;
}
