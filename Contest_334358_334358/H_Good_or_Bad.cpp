#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while ( t-- ){
        string s ;
        cin >> s ;
        int found1 = s.find("101" ) , found2 = s.find("010");
        if ( found1 > -1 || found2 > -1 )
            cout << "Good\n" ;
        else
            cout << "Bad\n" ;
    }
    return 0;
}