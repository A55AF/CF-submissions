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
    int n;
    cin >> n;
    int sum = 3;
    int indx = 2;
    string s = "aaa";
    while (sum < n)
    {
        sum++;
        if (s[indx] - 'a' == 25)
        {
            indx--;
        }
        s[indx]++;
    }
    cout << s;
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