#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s ;
    int sz = s.size();
    string mn = s;
    for ( int i = 1 ; i < sz ; i++ )
    {
        string left = s.substr(0,i);
        string right = s.substr(left.size() , sz - i);
        sort(left.begin() , left.end() );
        sort(right.begin() , right.end() );
        string result = left + right;
        mn = min(mn,result);
    }
    cout << mn ;
    return 0;
}
