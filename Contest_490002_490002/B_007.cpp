#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , frq[26] = {0}, cnt = 0;
    cin >> n ;
    string s ;
    cin >> s;
    for ( int i = 0 ; i < n ; i++ )
        frq[s[i]-'a'] = 1;
    for ( int i = 0 ; i < 26 ; i++ )
    {
        if ( frq[i] == 1 )
            cnt++;
    }
    cnt % 2 ? cout << "Stop" : cout << "Continue" ;
    return 0;
}
