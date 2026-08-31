#include <bits/stdc++.h>
using namespace std;

void sort_array(int array[], int x)
{
    for (int i = 0; i < x - 1; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i], array[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort_array(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}