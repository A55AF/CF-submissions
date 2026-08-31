#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n ;
        cin >> n ;
        int div = 1;
        for ( int i = 2 ; 1LL*i*i <= n ; i++ ) {
            if (n % i == 0 ) {
                div = n / i ;
                break;
            }
        }
        cout << div << " " << n - div ;
        cout << "\n" ;
    }
    return 0;
}