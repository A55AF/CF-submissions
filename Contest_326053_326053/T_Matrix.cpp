#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, result1 = 0, result2 = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
    {
        result1 += arr[i][i];
        result2 += arr[i][j];
    }
    int result = abs(result1 - result2);
    cout << result;
    return 0;
}