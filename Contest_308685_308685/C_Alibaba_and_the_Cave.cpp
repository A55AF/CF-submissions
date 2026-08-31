#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    bool check = false;
    for (int i = 0; i < 6; i++)
    {
        if (a + b - c == d)
        {
            check = true;
            break;
        }
        else if (a + b * c == d)
        {
            check = true;
            break;
        }
        else if (a - b + c == d)
        {
            check = true;
            break;
        }
        else if (a - b * c == d)
        {
            check = true;
            break;
        }
        else if (a * b + c == d)
        {
            check = true;
            break;
        }
        else if (a * b - c == d)
        {
            check = true;
            break;
        }
    }
    if ( check )
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
} 