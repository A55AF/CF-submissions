#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    cout << "floor " << x << " / " << y << " = " << x / y << "\n";
    cout << "ceil " << x << " / " << y << " = " << (((x%y) == 0) ? (x/y) : ((x/y)+1));
    cout << "\nround " << x << " / " << y << " = " << (x / y) + ((x % y) > ((y - 1) / 2));
    return 0;
}