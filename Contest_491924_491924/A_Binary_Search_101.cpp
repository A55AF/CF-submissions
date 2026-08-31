#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a , b , k , cnt = 0;
    cin >> a >> b >> k ;
    while ( a <= b ){
        long long mid = (a+b)/2;
        cnt++;
        if ( mid == k ){
            break;
        }
        else if ( mid < k ){
            a = mid + 1 ;
        }
        else if ( mid > k ){
            b = mid - 1;
        }
    }
    cout << cnt ;
    return 0;
}