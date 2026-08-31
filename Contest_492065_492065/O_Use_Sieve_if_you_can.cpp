#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    for (int i = 2; 1LL * i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    if (n == 1)
        return false;
    return true;
}

const int N = 1e5 + 5;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long x, y, cnt = 0;
    cin >> x >> y;
    long long frq[N] = {0};
    for (int i = 2; 1LL * i * i <= x; i++)
    {
        while (x % i == 0)
        {
            frq[i]++;
            x /= i;
        }
    }
    if (x != 1)
        frq[x]++;
    for (int i = 0; i < N; i++)
    {
        if (frq[i])
            cnt++;
        frq[i] *= y;
    }
    cout << cnt << "\n";
    for (int i = 0; i < N; i++)
    {
        if (frq[i])
            cout << i << " " << frq[i] << "\n";
    }
    return 0;
}