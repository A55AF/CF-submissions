#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
            {
                cout << s[i];
                if (i == n - 2)
                {
                    cout << s[i + 1];
                    break;
                }
            }
            else
            {
                cout << s[i];
                if (s[i + 1] == 'a' || s[i + 1] == 'e')
                    continue;
                else
                {
                    if (i == n - 2)
                    {
                        cout << s[i + 1];
                        break;
                    }
                    else
                    {
                        if (s[i + 2] == 'b' || s[i + 2] == 'c' || s[i + 2] == 'd')
                        {
                            cout << s[i + 1] << ".";
                            i++;
                        }
                        else
                        {
                            cout << ".";
                            continue;
                        }
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}