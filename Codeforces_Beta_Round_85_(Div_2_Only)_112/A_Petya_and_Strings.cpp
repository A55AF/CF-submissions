#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1 , s2;
    cin >> s1 >> s2 ;
    int ans = 0 ;
    for ( int i = 0 ; i < s1.size() ; i++ ) {
        char a = tolower(s1[i]) , b = tolower(s2[i]);
        if ( a < b ) ans = -1 ;
        else if ( a > b ) ans = 1 ;
        if ( a != b ) break ;
    }
    cout << ans ;
    return 0;
}