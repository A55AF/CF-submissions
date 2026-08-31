#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n , x , b , cnt = 1;
    cin >> n >> x >> b ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( arr[b-1] != 0 )
            cnt++, b = arr[b-1];
        else
            break;
    }
    if ( cnt <= x )
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
}
