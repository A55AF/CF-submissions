#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (auto it = s.rbegin(); it != s.rend();)
        {
            while (*it % 2 == 0)
            {
                int x = *it, y = x / 2;
                s.insert(y);
                s.erase(x);
                cnt++;
            }
            it++;
        }
        cout << cnt << "\n" ;
    }
    return 0;
}