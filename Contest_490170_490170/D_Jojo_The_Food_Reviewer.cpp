#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n , cnt = 0;
    cin >> n ;
    ll last_res ;
    ll arr[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
        if ( i == 0 )
        {
            cnt++,last_res = arr[i];
            continue;
        }
        if ( arr[i] > last_res )
            cnt++,last_res = arr[i];
    }
    cout << cnt ;
    return 0;
}
