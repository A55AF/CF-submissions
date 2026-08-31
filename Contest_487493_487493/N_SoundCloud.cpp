#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num_of_songs = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case '*':
            num_of_songs++;
            break;

        case '>':
            num_of_songs += 2;
            break;
        }
        if ( num_of_songs > 20 )
            num_of_songs -= 20;
    }
    cout << num_of_songs ;
    return 0;
}