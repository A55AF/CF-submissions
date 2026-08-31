#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    cin >> s ;
    int first_indx;
    for ( int i = 0 ; i < s.size() ; i++ ){
        if ( s[i] == '?' ){
            first_indx = i;
        }
    }
    for ( int i = first_indx + 1; i < s.size() ; i++ ){
        if ( s[i] == '=' )
            cout << ": " ;
        else if ( s[i] == '&' )
            cout << "\n" ;
        else
            cout << s[i] ;
    }
    return 0;
}
