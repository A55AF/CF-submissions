#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n , cnt = 0,frq[100000]={0};
    cin >> n ;
    int arr[n];
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
        frq[arr[i]]++;
    }

    for ( int i = 0 ; i < n-1 ; i++ )
    {
        ll product = arr[i] * arr[i+1] ;
        if ( frq[product] >= 1 )
            cnt++;
    }
    if ( cnt == n-1 )
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
}
