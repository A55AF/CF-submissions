#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n ;
        cin >> n ;
        if ( n%2 == 0 )
            n--;
        cout << n/2 << "\n" ;
    }
    return 0;
}
