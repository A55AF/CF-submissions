#include <bits/stdc++.h>
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int y = 1;
        int ans = 0;
        vector<int> v;
        while (x != 0)
        {
            if (y * (x % 10) != 0)
                v.push_back(y * (x % 10)), ans++;
            x /= 10;
            y *= 10;
        }
        cout << ans << "\n";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << "\n";
    }
    return 0;
}