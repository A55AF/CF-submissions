#include<bits/stdc++.h>
using namespace std;

void shortage( int n , int divide , int abst , pair<int,int> &s)
{
    int i = n , cnt = 0;
    while ( (i) % divide != 0 )
    {
        cnt++;
        i -= abst;
    }
    if ( abst == 2 )
    {
        s.first = cnt;
        s.second = i/divide;
    }
    else if ( abst == 3 )
    {
        s.second = cnt;
        s.first = i/divide;
    }
}
int main()
{
    int z ;
    cin >> z ;
    pair<int,int> s1 , s2;
    if ( z % 2 == 0 )
    {
        s1.first = z / 2;
        s1.second = 0;
        if ( z % 3 == 0 )
        {
            s2.first = 0;
            s2.second = z / 3;
        }
        else
        {
            shortage(z,3,2,s2);
        }
    }
    else
    {
        if ( z % 3 != 0 )
        {
            shortage(z,2,3,s1);
            shortage(z,3,2,s2);
        }
        else
        {
            shortage(z,2,3,s1);
            s2.first = 0;
            s2.second = z / 3;
        }
    }
    cout << s1.first << " " << s1.second << "\n";
    cout << s2.first << " " << s2.second;
    return 0;
}
