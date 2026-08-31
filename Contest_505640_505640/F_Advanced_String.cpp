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

const int mod = 1e9 + 7;

void accepted()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool palindrome = true;
    for (int i = 0, x = n - 1; i < (n / 2); i++, x--)
    {
        int res = abs(s[i] - s[x]);
        if (s[i] != s[x])
        {
            if (res % k != 0 || (s[i] + res > 'z' && s[x] + res > 'z'))
            {
                palindrome = false;
                break;
            }
        }
    }
    if (palindrome)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ASSAF;
    int t = 1;
    cin >> t;
    while (t--)
    {
        accepted();
        cout << "\n";
    }
    return 0;
}