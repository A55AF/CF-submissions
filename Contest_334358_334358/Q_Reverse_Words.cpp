#include <bits/stdc++.h>
using namespace std;

bool char_check ( char x )
{
    if ( x >= 'A' && x <= 'Z' )
        return true;
    else if ( x >= 'a' && x <= 'z' )
        return true;
    else
        return false;
}

int main()
{
    string s ;
    getline(cin, s);
    int l = 0, r = 0;
    for ( int i = 0 ; i < s.size() ; i++ )
    {
        if ( char_check(s[i]) ){
            r++;
            if ( i == s.size() - 1 )
                reverse( s.begin() + l, s.begin() + r );
        }
        else
        {
            reverse( s.begin() + l, s.begin() + r );
            l = i + 1;
            r = i + 1;
        }
    }
    for ( int i = 0 ; i < s.size() ; i++ )
        cout<<s[i] ;
    return 0;
}
