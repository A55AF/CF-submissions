#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arr1[a], arr2[b];
    for (int i = 0; i < a; i++)
        cin >> arr1[i];
    for (int i = 0; i < b; i++)
        cin >> arr2[i];
    for (int i = 0; i < a; i++)
    {
        int cnt = 0;
        for (int j = 0; j < b; j++)
        {
            if (arr1[i] != arr2[j])
                cnt++;
        }
        if (cnt == b)
            arr1[i] = 0;
    }
    int cnt = 0;
    int i = 0, j = 0;
    while (true)
    {
        if (i == a || j == b)
            break;
        if (arr1[i] == 0)
        {
            i++;
            continue;
        }
        if (arr1[i] == arr2[j])
        {
            cnt++;
            i++;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    if ( cnt == b )
        cout << "YES";
    else
        cout << "NO" ;
    return 0;
}