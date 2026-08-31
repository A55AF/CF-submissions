#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x , y , z ; cin >> x >> y >> z ;
    x + y > z && x + z > y && y + z > x ? cout << "YES" : cout << "NO" ;
    return 0;
}