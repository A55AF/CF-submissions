#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int x=s[0]-'a'+1,y=s[1]-'0';
    cout<<min(x-1,y-1)+min(8-x,8-y)+min(8-x,y-1)+min(x-1,8-y);
    return 0;
}
