#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        char arr[3][3], qx, qy;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '?')
                    qx = i, qy = j;
            }
        }
        int a = 0 , b = 0 , c = 0 ;
        for (int i = 0; i < 3; i++)
        {
            if (arr[qx][i] == 'A')
                a++;
            else if (arr[qx][i] == 'B')
                b++;
            else
                c++;
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i][qy] == 'A')
                a++;
            else if (arr[qx][i] == 'B')
                b++;
            else
                c++;
        }
        if (a == 0)
            cout << "A\n";
        else if (b == 0)
            cout << "B\n";
        else
            cout << "C\n";
    }
    return 0;
}