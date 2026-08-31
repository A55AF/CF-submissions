#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n ;
    char table, dishes ;
    string t ;
    cin >> n >> dishes >> table ;
    int d[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        string s ;
        cin >> s ;
        d[i] = stoi(s, 0, 2) ;
    }
    cin >> t ;
    sort(d, d + n );
    if ( dishes == 'D' )
        reverse(d, d + n );
    sort(t.begin(),t.end());
    if ( table == 'D' )
        reverse (t.begin() , t.end() );
    for ( int i = 0 ; i < n ; i++ )
        cout << t[i] << d[i] << " ";
    return 0;
}
