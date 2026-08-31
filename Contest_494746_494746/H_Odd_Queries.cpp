#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> v;
        long long prfx[n] = {0};
        long long sum = 0;
        for (auto i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
            sum += x;
            if (i == 0)
                prfx[i] += x;
            else
                prfx[i] += prfx[i - 1] + x;
        }
        while (q--)
        {
            long long l, r;
            long long k ;
            cin >> l >> r >> k;
            l-=2, r--;
            long long x = sum;
            if ( l < 0 )
                x = x - prfx[r];
            else
                x = x - (prfx[r] - prfx[l]);
            x += k*(r-l) ;
            if (x % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}