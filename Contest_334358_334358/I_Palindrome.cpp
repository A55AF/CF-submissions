#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.size();
    bool check_str = true;
    int left = 0, right = size - 1;
    while ( true )
    {
        if ( left > right )
            break;
        else if ( right == left )
            break;
        if (s[left] != s[right])
        {
            check_str = false;
            break;
        }
        left++;
        right--;
    }
    if (check_str)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}