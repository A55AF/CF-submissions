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

const int mod = 1e9 + 7;

void accepted()
{
    int q;
    cin >> q;
    deque<int> dq;
    multiset<int> l, r;
    int mid1, mid2;
    while (q--)
    {
        int z;
        cin >> z;
        if (z == 1)
        {
            int x;
            cin >> x;
            dq.push_back(x);
            if (dq.size() == 1)
                l.insert(x);
            else if (dq.size() == 2)
                r.insert(x);
            else if (dq.size() % 2 != 0)
            {
                r.insert(x);
            }
            else if (dq.size() % 2 == 0)
            {
                mid1 = dq[(dq.size() / 2) - 1];
                r.erase(r.find(mid1));
                l.insert(mid1), r.insert(x);
            }
        }
        else if (z == 2)
        {
            mid1 = dq[dq.size() / 2];
            int x = dq.front();
            dq.pop_front();
            l.erase(l.find(x));
            dq.pb(x);
            r.insert(x);
            if (dq.size() % 2 != 0)
                r.erase(r.find(mid1)), l.insert(mid1);
            else
            {
                mid2 = dq[(dq.size() / 2) - 1];
                r.erase(r.find(mid2));
                l.insert(mid2);
            }
        }
        else if (z == 3)
        {
            int mx1 = *(--l.end());
            int mx2 = *(--r.end());
            cout << mx1 + mx2 << "\n";
        }
        // cout << "l : ";
        // for (auto it : l)
        //     cout << it << " ";
        // cout << "\nr : ";
        // for (auto it : r)
        //     cout << it << " ";
        // cout << "\n";
    }
}

int main()
{
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--)
    {
        accepted();
    }
    return 0;
}