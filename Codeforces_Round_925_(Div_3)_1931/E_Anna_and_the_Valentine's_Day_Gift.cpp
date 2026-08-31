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
----------------------------

void accepted()
{

    int n, m;
    cin >> n >> m;
    vector<int> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        sum += s.size();
        int cnt = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                cnt++;
            else
                break;
        }
        v.pb(cnt);
    }
    sort(rall(v));
    int r = 1;
    for (int i = 0; i < n; i++)
    {
        if (r)
        {
            sum -= v[i];
        }
        r ^= 1;
    }

    if (sum >= m+1)
        cout << "Sasha\n";
    else
        cout << "Anna\n";
}
int main()
{
    ASSAF;
    int t = 1;
    cin >> t;
    while (t--)
    {
        accepted();
        //cout << "\n";
    }
    return 0;
}