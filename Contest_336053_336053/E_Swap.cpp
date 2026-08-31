#include<bits/stdc++.h>
using namespace std;

void swapping( int &x , int &y )
{
    x = x + y;
    y = x - y;
    x = x - y;
}

int main()
{
    int x , y ;
    cin >> x >> y;
    swapping(x,y);
    cout << x << " " << y ;
    return 0;
}