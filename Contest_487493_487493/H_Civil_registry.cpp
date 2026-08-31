#include <bits/stdc++.h>
using namespace std;

int main()
{
    short n;
    cin >> n;
    cout << pow(26, n) << "\n";
    switch (n)
    {
    case 1:
        for (int i = 0; i < 26; i++)
            cout << char(i + 'a') << "\n";
        break;
    case 2:
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
                cout << char(i + 'a') << char(j + 'a') << "\n";
        }
        break;
    case 3:
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                for (int x = 0; x < 26; x++)
                    cout << char(i + 'a') << char(j + 'a') << char(x + 'a') << "\n";
            }
        }
        break;
    case 4:
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                for (int x = 0; x < 26; x++)
                {
                    for ( int y = 0 ; y < 26 ; y++)
                        cout << char(i + 'a') << char(j + 'a') << char(x + 'a') << char(y+'a')<< "\n";
                }
            }
        }
        break;
    }
    return 0;
}