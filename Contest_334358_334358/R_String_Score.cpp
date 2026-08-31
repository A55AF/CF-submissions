#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    string s;
    cin >> s ;
    for ( int i = 0 ; i < s.size() ; i++ ){
        if ( s[i] == 'V' )
            result += 5;
        else if ( s[i] == 'W' )
            result += 2;
        else if ( s[i] == 'X' && i != s.size() - 1 )
            i++;
        else if ( s[i] == 'Y' && i != s.size() - 1 ){
            char c = s[i+1];
            s.push_back(c);
            i++;
        }
        else if ( s[i] == 'Z' && i != s.size() - 1 ){
            if ( s[i+1] == 'V' ){
                result /= 5;
                i++;
            }
            else if ( s[i+1] == 'W' ){
                result /= 2;
                i++;
            }
        }
    }
    cout << result ;
    return 0;
}
