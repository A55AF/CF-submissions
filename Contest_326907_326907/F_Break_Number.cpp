#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y, c = 0, e = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        cin >> y;
        while (y > 0)
        {
            if (y % 2 == 0)
            {
                c++;
                y /= 2;
            }
            else if (y % 2 != 0)
            {
                break;
            }
        }
        if (c >= e)
        {
            e = c;
        }
        c = 0;
    }
    cout << e;
}