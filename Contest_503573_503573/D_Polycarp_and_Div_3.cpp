#include <bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define f(a) a.first
#define s(a) a.second
#define pb push_back
#define print(x)           \
    for (auto it : x)      \
    {                      \
        cout << it << " "; \
    }
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

void accepted()
{
    string s;
    cin >> s;
    int ans = 0;
    int last = -1;
    for (int i = 0; i < s.size(); i++)
    {
        int num = 0;
        for (int x = i; x >= i - 2; x--)
        {
            if (x == last)
                break;
            num += (s[x] - '0') % 3;
            if (num % 3 == 0)
            {
                ans++, num = 0, last = i;
                break;
            }
            if (x == 0)
                break;
        }
    }
    cout << ans;
}

int main()
{
    ASSAF;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        accepted();
        // cout << "\n";
    }
    return 0;
}