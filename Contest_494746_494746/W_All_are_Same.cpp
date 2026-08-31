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
    int n, mn = 1e9;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        mn = min(mn, x);
    }
    set<int> s;
    for (auto it : v)
    {
        if (it == mn)
            continue;
        s.insert(it - mn);
    }
    if (s.size() == 0)
        cout << -1;
    else if (s.size() == 1)
        cout << *s.begin();
    else
    {
        int g = __gcd(*s.begin(), *next(s.begin()));
        for (auto it = next(next(s.begin())); it != s.end(); it++)
            g = __gcd(g, *it);
        cout << g;
    }
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