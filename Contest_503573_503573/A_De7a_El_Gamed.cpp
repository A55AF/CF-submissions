#include <bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define pb push_back
#define print(x)      \
    for (auto it : x) \
        cout << it << " ";
typedef long long ll;
using namespace std;
const int N = 1e5 + 10;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

void accepted()
{
    int q;
    cin >> q;
    vector<vector<pair<int, int>>> v(N);
    for (int i = 1; i <= N; i++)
    {
        int y = i;
        for (int x = 2; x * x <= y; x++)
        {
            int cnt = 0;
            while (y % x == 0)
            {
                cnt++;
                y /= x;
            }
            if (cnt > 0)
                v[i].pb({x, cnt});
        }
        if (y > 1)
            v[i].pb({y, 1});
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        vector<int> frq(N, 1);
        for (int i = l; i <= r; i++)
        {
            for (auto it : v[i])
                frq[it.first] += it.second;
        }
        ll ans = 1, mod = 1e9 + 7;
        for (auto it : frq)
            ans = (ans * it) % mod;
        cout << ans << "\n";
    }
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