#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define s(a) a.second
#define loop(i, st, en) for (int i = st; i < en; i++)
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
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    loop(i, 0, n)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    bool flag = false;
    for (auto it : mp)
    {
        if (it.second >= k)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << k - 1;
    else
        cout << n;
}

int main()
{
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
    {
        accepted();
        cout << "\n";
    }
    return 0;
}