#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s ;
    int egypt[5] {0} , cnt = 0;
    for ( int i = 0 ; i < s.size() ; i++ )
    {
        if ( s[i] == 'E' || s[i] == 'e' )
            egypt[0]++;
        else if ( s[i] == 'G' || s[i] == 'g' )
            egypt[1]++;
        else if ( s[i] == 'Y' || s[i] == 'y' )
            egypt[2]++;
        else if ( s[i] == 'P' || s[i] =='p' )
            egypt[3]++;
        else if ( s[i] == 'T' || s[i] == 't' )
            egypt[4]++;
    }
    bool empty = false;
    while ( !empty ) {
        for ( int i = 0 ; i < 5 ; i++ ) {
            egypt[i]--;
            if ( egypt[i] <= 0 ) empty = true;
        }
        cnt++;
    }
    cout << cnt ;
    return 0;
}