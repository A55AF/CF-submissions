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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!v.empty() && x == v.back())
            continue;
        v.pb(x);
    }
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] < v[i + 1] && v[i] < v[i - 1])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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