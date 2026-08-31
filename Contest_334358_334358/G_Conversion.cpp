#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.size();
    for ( int i = 0 ; i < size ; i++ ){
        if ( isupper(s[i]) )
            s[i] = tolower(s[i]);
        else if ( islower(s[i]) )
            s[i] = toupper(s[i]);
        else if ( s[i] == ',' )
            s[i] = ' ';
        cout << s[i] ;
    }
    return 0;
}