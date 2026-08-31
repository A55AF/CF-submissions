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
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        mp[x]++;
        v.pb(0);
    }
    for (int i = 0; i < 2 * n; i += 2)
    {
        int find = v[i] + 1;
        bool check = false;
        while (find <= 2 * n)
        {
            if (mp[find] == 0)
            {
                v[i + 1] = find;
                mp[find]++;
                check = true;
                break;
            }
            find++;
        }
        if (!check)
        {
            cout << -1;
            return;
        }
    }
    for (auto it : v)
        cout << it << " ";
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