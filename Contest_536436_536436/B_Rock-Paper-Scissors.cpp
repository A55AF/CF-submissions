#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
↓↓↓ START FROM HERE ↓↓↓

void accepted()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> prfxR(n + 1), prfxP(n + 1), prfxS(n + 1);
    for (int i = 0; i < n; i++)
    {
        prfxR[i + 1] = prfxR[i], prfxS[i + 1] = prfxS[i], prfxP[i + 1] = prfxP[i];
        if (s[i] == 'R')
            prfxR[i + 1]++;
        else if (s[i] == 'S')
            prfxS[i + 1]++;
        else
            prfxP[i + 1]++;
    }

    int ans = 0, c1 = 0, c2 = 0;
    for (int x = 0; x <= n; x++)
    {
        for (int y = x; y <= n; y++)
        {
            c1 = prfxS[x] + prfxR[y] - prfxR[x] + prfxP[n] - prfxP[y];
            c2 = prfxP[x] + prfxS[y] - prfxS[x] + prfxR[n] - prfxR[y];
            if (c1 > c2)
                ans++;
        }
    }
    cout << ans;
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