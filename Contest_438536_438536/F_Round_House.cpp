#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int k = a ;
    if ( b > 0 ){
        while ( b > 0 ){
            k++;
            if ( k > n ){
                k = 1;
            }
            b--;
        }
    }
    else if ( b < 0 ){
        while ( b < 0 ){
            k--;
            if ( k == 0 ){
                k = n;
            }
            b++;
        }
    }
    cout << k;
    return 0;
}