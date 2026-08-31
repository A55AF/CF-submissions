#include <bits/stdc++.h>
using namespace std;
const int N = 3000;

int main()
{
    int n, frq[N] = {0};
    cin >> n;
    int cnt_nums = 0, cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        for (int j = 2; j * j <= x; j++)
        {
            while (x % j == 0)
            {
                frq[j]++;
                x /= j;
            }
        }
        if (x != 1)
            frq[x]++;
        for (int j = 0; j < N; j++)
        {
            if (frq[j] > 0)
                cnt++, frq[j] = 0;
        }
        if (cnt == 2)
            cnt_nums++;
        cnt = 0;
    }
    cout << cnt_nums;
    return 0;
}