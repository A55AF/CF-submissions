#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        long long n, q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort ( arr , arr + n ) ;
    while (q--)
    {
        long long x;
        cin >> x;
        long long l = 0, r = n - 1, bed_1 = arr[n-1] , bed_2 = arr[0];
        while (l <= r)
        {
            long long mid = (l + r) / 2;
            long long val = arr[mid];
            if (val > x)
                bed_1 = val , r = mid - 1;
            else if ( val == x )
            {
                bed_1 = val ;
                break;
            }
            else
                bed_2 = val , l = mid + 1;
        }
        int distance = min(abs(bed_1 - x),abs(bed_2 - x) );
        cout << distance << "\n" ;
    }
    return 0;
}