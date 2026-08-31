#include <bits/stdc++.h>
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    multiset<pair<int, int>> st;
    map<pair<int, int>, int> mp;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        st.insert({x, y});
    }
    for (auto it : st)
    {
        int x = it.first, y = it.second;
        if (x - 2 >= 1)
        {
            if (y - 1 >= 1)
            {
                if (st.find({x - 2, y - 1}) == st.end())
                    mp[{x - 2, y - 1}]++;
            }
            if (y + 1 <= n)
            {
                if (st.find({x - 2, y + 1}) == st.end())
                    mp[{x - 2, y + 1}]++;
            }
        }
        if (x + 2 <= n)
        {
            if (y - 1 >= 1)
            {
                if (st.find({x + 2, y - 1}) == st.end())
                    mp[{x + 2, y - 1}]++;
            }
            if (y + 1 <= n)
            {
                if (st.find({x + 2, y + 1}) == st.end())
                    mp[{x + 2, y + 1}]++;
            }
        }
        if (y + 2 <= n)
        {
            if (x - 1 >= 1)
            {
                if (st.find({x - 1, y + 2}) == st.end())
                    mp[{x - 1, y + 2}]++;
            }
            if (x + 1 <= n)
            {
                if (st.find({x + 1, y + 2}) == st.end())
                    mp[{x + 1, y + 2}]++;
            }
        }
        if (y - 2 >= 1)
        {
            if (x - 1 >= 1)
            {
                if (st.find({x - 1, y - 2}) == st.end())
                    mp[{x - 1, y - 2}]++;
            }
            if (x + 1 <= n)
            {
                if (st.find({x + 1, y - 2}) == st.end())
                    mp[{x + 1, y - 2}]++;
            }
        }
    }
    int ans = -1;
    multiset<pair<int, int>> s;
    for (auto it : mp)
    {
        if (it.second >= 2)
        {
            ans++;
            s.insert({it.first.first, it.first.second});
        }
    }
    if (ans != -1)
    {
        cout << ans + 1 << "\n";
        for (auto it : s)
            cout << it.first << " " << it.second << "\n";
    }
    else
        cout << ans;
    return 0;
}