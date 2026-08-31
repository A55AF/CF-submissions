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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        multiset<int, greater<>> s;
        bool turn = true;
        for (int i = 0; i < n; i++)
        {
            s.insert(v[i]);
            if ((v[i] - 1) % 2 != 0)
                turn = !turn;
            if (turn)
                cout << "2 ";
            else
                cout << "1 ";
            s.erase(1);
        }
        cout << "\n";
    }
    return 0;
}