#include<bits/stdc++.h>
using namespace std;

bool char_check ( char x ){
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
    getline(cin , s);
    int cnt1 = 0 , cnt2 = 0;
    for ( int i = 0 ; i < s.size() ; i++ ){
        if ( char_check(s[i]) ){
            if ( s[i+1] == '\0'){
                cnt1++;
            }
            else
                cnt2++;
        }
        else if ( s[i] == '.' || s[i] == ',' || s[i] == '?' || s[i] == ' ' || s[i] == '!' ){
            if ( cnt2 > 0 ){
                cnt1++;
                cnt2 = 0;
            }
        }
    }
    cout << cnt1 ;
    return 0;
}
