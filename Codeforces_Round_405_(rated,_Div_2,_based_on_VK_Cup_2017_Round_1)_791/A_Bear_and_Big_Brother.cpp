#include <bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define rall(a) a.begin(), a.end()
#define all(a) a.begin(), a.end()
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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (true)
    {
        if (a > b)
            break;
        if (a <= b)
            a *= 3, b *= 2, ans++;
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