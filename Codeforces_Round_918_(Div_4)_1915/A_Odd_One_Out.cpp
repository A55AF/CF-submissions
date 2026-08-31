#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int frq[10] = {0};
        frq[a]++, frq[b]++, frq[c]++;
        for (int i = 0; i < 10; i++)
        {
            if (frq[i] == 1)
            {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}