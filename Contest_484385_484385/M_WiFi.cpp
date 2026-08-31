#include<bits/stdc++.h>
using namespace std;

long long lengthOfLine( long long x1 , long long x2 , long long y1 , long long y2 )
{
    return sqrt(pow((x1-x2),2) + pow((y1-y2),2));
}

int main()
{
    long long x1 , x2 , y1 , y2 , r1 , r2 ;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2 ;
    if ( lengthOfLine(x1,x2,y1,y2) <= (r1+r2) )
        cout << "yes" ;
    else
        cout << "no" ;
    return 0;
}
