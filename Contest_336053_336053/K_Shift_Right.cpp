#include <bits/stdc++.h>
using namespace std;

void shift( deque<int> &array , int n , int x )
{
    int i = 0 ;
    while ( i < x )
    {
        int z = array[n-1];
        array.pop_back();
        array.push_front(z);
        i++;
    }
}
int main()
{
    
    int n , x ;
    cin >> n >> x ;
    x %= n;
    deque<int> arr(n) ;
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr.at(i) ;
    shift(arr,n,x);
    for( int i = 0 ; i < n ; i++)
        cout << arr.at(i) << " " ;
    return 0;
}