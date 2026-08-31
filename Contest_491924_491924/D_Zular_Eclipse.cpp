#include <bits/stdc++.h>
using namespace std;
const int N = 3000;

int main()
{
    long long n;
    cin >> n;
    long long arr[n], prfx[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    prfx[0] = arr[0];
    for (int i = 1; i < n; i++)
        prfx[i] += prfx[i - 1] + arr[i];
    int q;
    cin >> q;
    while (q--)
    {
        long long x, number_of_aliens = -1;
        cin >> x;
        long long l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            int val = arr[mid];
            if (val <= x)
                number_of_aliens = mid, l = mid + 1;
            else
                r = mid - 1;
        }
        if (number_of_aliens != -1)
            cout << number_of_aliens + 1 << " " << prfx[number_of_aliens] << "\n";
        else
            cout << number_of_aliens << "\n";
    }
    return 0;
}