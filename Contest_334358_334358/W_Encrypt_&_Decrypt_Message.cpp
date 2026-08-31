#include <bits/stdc++.h>
using namespace std;
int main()
{
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" ;
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    int input ;
    string s ;
    cin >> input ;
    if ( input == 1 ){
        cin >> s ;
        for ( int i = 0 ; i < s.size() ; i++ ){
            for ( int j = 0 ; j < original.size() ; j++ ){
                if ( s[i] == original[j] ) {
                    s[i] = key[j];
                    break;
                }
            }
        }
    }
    else if ( input == 2 ){
        cin >> s ;
        for ( int i = 0 ; i < s.size() ; i++ ){
            for (int j = 0 ; j < key.size() ; j++ ){
                if (s[i] == key[j] ) {
                    s[i] = original[j];
                    break;
                }
            }
        }
    }
    cout << s ;
    return 0;
}