#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    long long mx = v[n - 1], mn = v[0];
    long long cnt_mn = count(v.begin(), v.end(), mn);
    long long cnt_mx = count(v.begin(), v.end(), mx);
    cout << abs(mx - mn) << " ";
    if (mn == mx)
        --cnt_mn , cout << (cnt_mn * (cnt_mn + 1)) / 2;
    else
        cout << cnt_mn * cnt_mx;
    return 0;
}