#include <bits/stdc++.h>
using namespace std;

int BinarySearch(long long array[], int n, long long x)
{
    
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + ( high - low ) / 2;
        if (array[mid] == x)
            return mid;
        else if (array[mid] < x)
            low = mid + 1;
        else if (array[mid] > x)
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n, q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    while ( q-- ){
        long long x;
        cin >> x ;
        int result = BinarySearch(arr , n , x );
        if ( result == -1 )
            cout << "not found\n" ;
        else
            cout << "found\n";
    }
    return 0;
}