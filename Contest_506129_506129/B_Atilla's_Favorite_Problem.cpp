#include <bits/stdc++.h>
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char mx = -1;
        for (int i = 0; i < n; i++)
            mx = max(mx, s[i]);
        cout << mx - 'a' + 1 << "\n";
    }
    return 0;
}