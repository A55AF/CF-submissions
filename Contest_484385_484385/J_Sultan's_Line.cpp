#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((x1 - x2) * (y1 - y3) == (x1 - x3) * (y1 - y2))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}