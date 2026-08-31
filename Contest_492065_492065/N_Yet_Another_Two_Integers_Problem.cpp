#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int a , b ;
        cin >> a >> b ;
        double sub = abs(a-b) ;
        cout << fixed << setprecision(0) << ceil(sub/10) << "\n" ;
    }
    return 0;
}