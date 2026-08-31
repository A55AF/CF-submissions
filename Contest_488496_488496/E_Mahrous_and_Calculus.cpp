#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t ;
    cin >> t;
    while ( t-- )
    {
        ll c , n ;
        cin >> c >> n ;
        ll x = n ,z = c*n*c ,y = z - 2*c*n + n;
        cout << x << " " << y << "\n" ;
    }
    return 0;
}
