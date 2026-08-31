#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, src, cnt = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> src;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == src)
                cnt++;
        }
    }
    cnt > 0 ? cout << "will not take number" : cout << "will take number";
    return 0;
}