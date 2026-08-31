#include<bits/stdc++.h>
using namespace std;
void always_max(long long &x, long long &y)
{
    if (x < y)
        swap(x, y);
}
int main()
{
    long long a , b , x ;
    cin >> a >> b >> x ;
    always_max(a,b) ;
    cout << (a/x) - ((b-1)/x) ;
    return 0;
}
