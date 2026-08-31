#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , x;
    cin >> n >> x ;
    int rest = 0 , kilos = x ;
    while ( kilos <= n )
    {
        rest++;
        kilos += x * (rest + 1);
    }
    cout << rest ;
    return 0;
}
