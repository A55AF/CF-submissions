#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t ;
    cin >> t ;
    while ( t-- )
    {
        string binary;
        cin >> binary ;
        char x, reminder = 0;
        cin >> x ;
        if ( x == '*' )
            binary.push_back('0');
        else{
            if ( binary[binary.size()-1] == '0' )
                binary.pop_back();
            else
                binary.pop_back() , reminder = '1';
        }
        while ( binary.size() < 5 )
        {
            string s = "0" ;
            binary = s + binary;
        }
        cout << binary ;
        if ( reminder == '1')
            cout << "." << reminder ;
        cout << "\n" ;
    }
    return 0 ;
}
