#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define loop(i, st, en) for (int i = st; i < en; i++)
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

void accepted()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;
    loop(i, 0, n)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    int mn = INT_MAX;
    loop(i, 0, n)
    {
        loop(j, i + 1, n)
        {
            int diff = 0;
            loop(x, 0, m)
            {
                diff += abs(v[i][x] - v[j][x]);
            }
            mn = min(diff, mn);
        }
    }
    cout << mn;
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