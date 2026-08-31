#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
    // (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int pos = 0;
    bool zero = 0;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            pos++, cout << x << " ";
        else if (x < 0)
            neg.push_back(x);
        else
            zero = 1;
    }
    sort(neg.begin(), neg.end());
    for (int i = 0; i < neg.size() && neg.size() > 0; i++)
    {
        if (neg.size() % 2)
        {
            if (i == neg.size() - 1)
                continue;
        }
        cout << neg[i] << " ";
    }
    if (neg.size() == 1 && !pos )
        cout << neg[0] << " ";
    if (zero && neg.size() <= 1 && !pos)
        cout << "0";
    cout << "\n";
    return 0;
}