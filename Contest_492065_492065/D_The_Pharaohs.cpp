#include <bits/stdc++.h>
using namespace std;
const int N = 3000;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t ;
    cin >> t;
    while ( t-- )
    {
        long long n ;
        cin >> n ;
        double row = ceil((-1+sqrt(1+4*(n*2)))/2) ;
        cout << (long long) row << "\n" ;
    }
    return 0;
}