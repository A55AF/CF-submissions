#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mn = INT_MAX, mx = INT_MIN, min_index, max_index;
    cin >> n;
    int arr[n];
    for ( int i = 0 ; i < n ; ++i )
    {
        cin >> arr[i];
        if ( arr[i] < mn ){
            mn = arr[i];
            min_index = i;
        }
        
    }
    for ( int z = 0 ; z < n ; ++z ){
        if ( arr[z] > mx ){
            mx = arr[z] ;
            max_index = z;
        }
    }
    int swtch = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = swtch;
    for ( int x = 0 ; x < n ; ++x ){
        cout << arr[x] << " ";
    } 

    return 0;
}