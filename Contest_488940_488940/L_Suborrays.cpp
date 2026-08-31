#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 105 ;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t ;
    cin >> t ;
    while ( t-- )
    {
        double n ;
        int vis[N]= {0};
        cin >> n ;
        if ( n == 1 )
            cout << n << "\n";
        else
        {
            int start = ceil(n/2);
            vis[start] = 1;
            cout << start << " " ;
            for ( int i = 1 ; i <= n-1 ; i++ )
            {
                for ( int j = 1 ; j <= n ; j++ )
                {
                    if ( start == j )
                        continue;
                    if ( start | j >= ((i+1)-i+1) && vis[j] == 0 )
                    {
                        cout << j << " " ;
                        vis[j] = 1;
                    }
                }
            }
            cout << "\n" ;
        }
    }
    return 0;
}
