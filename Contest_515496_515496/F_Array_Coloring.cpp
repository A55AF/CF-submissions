#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int exe;
    cin >> exe;
    while (exe--)
    {
        int n;
        cin >> n;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
                odd++;
        }
        cout << (odd % 2 ? "NO\n" : "YES\n");
    }
    return 0;
}