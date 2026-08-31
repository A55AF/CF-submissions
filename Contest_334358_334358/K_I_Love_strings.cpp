#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int size_s = s.size(), size_t = t.size();
        if ( size_s >= size_t ){
            for ( int i = 0 ; i < size_s ; i++ ){
                if ( i >= size_t )
                    cout << s[i] ;
                else{
                    cout << s[i] << t[i] ;
                }
            }
        }
        else if ( size_t > size_s ){
            for ( int i = 0 ; i < size_t ; i++ ){
                if ( i >= size_s )
                    cout << t[i] ;
                else{
                    cout << s[i] << t[i] ;
                }
            }
        }
        cout << "\n" ;
    }
    return 0;
}