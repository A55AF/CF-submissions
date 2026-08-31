#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void always_max(double &x, double &y)
{
    if (x < y)
        swap(x, y);
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    double x ,  y;
    cin >> x >> y ;
    always_max(x,y);
    if ( x / 2 == y )
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
}
