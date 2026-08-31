#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    int first_index = 0 , count = 0 , length = 0;
    vector<string> str;
    for ( int i = 0 ; i < s.size() ; i++ )
    {
        if ( s[i] == 'L' )
            count++;
        if ( s[i] == 'R' )
            count--;
        length++;
        if ( count == 0 ){
            str.push_back(s.substr(first_index , length));
            first_index = i+1;
            length = 0;
        }
    }
    cout << str.size() << "\n";
    for ( int i = 0 ; i < str.size() ; i++ )
        cout << str.at(i) << "\n" ;
    return 0;
}