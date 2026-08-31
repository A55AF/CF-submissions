#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> v ;
    for ( int i = 0 , x = 1 , j = 1; i < 81 ; i++ , j++ ){
        if ( j == 10 )
            x *= 10 , x++, j = 1;
        v.push_back(x*j);
    }
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int l = 0, r = v.size() - 1, indx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            long long val = v[mid];
            if (val == n)
            {
                indx = mid;
                break;
            }
            else if (val < n)
                indx = mid, l = mid + 1;
            else
                r = mid - 1;
        }
        cout << indx + 1 << "\n";
    }
    return 0;
}

// the first accepted was a joke