#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m,vis[N] = {0};
    cin >> n >> m ;
    int arr[n], prfx[n] = {0};
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
        vis[arr[i]] = 1;
    }
    for ( int i = n-1 ; i >= 0 ; i-- )
    {
        if ( i == n-1 )
        {
            if ( vis[arr[i]] == 1 )
                prfx[i] = 1,vis[arr[i]] = 0;
            continue;
        }
        prfx[i] = prfx[i+1];
        if ( vis[arr[i]] == 1 )
        {
            prfx[i]++;
            vis[arr[i]] = 0;
        }
    }
    while ( m-- )
    {
        int x ;
        cin >> x;
        cout << prfx[x-1] << "\n";
    }
    return 0;
}
