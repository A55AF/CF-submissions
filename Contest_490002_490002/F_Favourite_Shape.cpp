#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 , mod = 1e9+7;

int main()
{
    int n;
    cin >> n;
    long long power = 1;
    if (n == 0)
        cout << 1;
    else
    {
        for (int i = 0; i < n; i++)
        {
            power = ((power%mod) * (4%mod))%mod;
        }
        cout << power ;
    }
    return 0;
}