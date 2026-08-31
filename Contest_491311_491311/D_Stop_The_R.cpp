#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n , k ;
    cin >> n >> k ;
    string s ;
    cin >> s;
    vector<int> v ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( s[i] == 'R' )
            v.push_back(i) ;
    }
    int sz = v.size() ;
    if ( k > 0.5*sz )
    {
        if ( sz % 2 == 0 )
            k = 0.5 * sz ;
        else
            k = (0.5 * sz) + 1 ;

    }
    for ( int i = 0 , x = 0 , y = sz-1 ; i < k ; i++ )
    {
        s[v.at(x)] = ' ';
        s[v.at(y)] = ' ' ;
        x++,y--;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( s[i] == ' ' )
            continue;
        cout << s[i] ;
    }
    return 0;
}
