#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s , result = " ";
    cin >> s ;
    int found = s.find("EGYPT");
    while ( found > -1 ){
        s.replace(found , 5 , result );
        found = s.find("EGYPT") ;
    }
    cout << s ;
    return 0;
}