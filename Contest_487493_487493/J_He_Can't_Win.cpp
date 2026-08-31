#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, cnt = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        long long sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            cnt++;
    }
    cout << cnt;
    return 0;
}