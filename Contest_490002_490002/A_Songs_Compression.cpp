#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt = 0;
    long long sum_a = 0, sum_b = 0;
    cin >> n >> m;
    long long a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        sum_a += a[i], sum_b += b[i];
    }
    if (sum_a <= m)
        cout << cnt;
    else
    {
        if (sum_b > m)
            cout << cnt - 1;
        else
        {
            long long diff[n];
            for (int i = 0; i < n; i++)
            {
                diff[i] = a[i] - b[i];
            }
            sort(diff, diff + n);
            reverse(diff,diff+n);
            for (int i = 0; i < n; i++)
            {
                if (sum_a <= m)
                    break;
                else
                {
                    sum_a -= diff[i];
                    cnt++;
                }
            }
            cout << cnt;
        }
    }
    return 0;
}
