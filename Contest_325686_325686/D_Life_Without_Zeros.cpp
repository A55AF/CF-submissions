#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a , b , c , na=0,nb=0,nc=0;
    cin >> a >> b ;
    c = a+b ;
    int s1 = log10(a) + 1 , s2 = log10(b) + 1 , s3 = log10(c) + 1;
    for (int i = s1 ; i > 0 ; i-- ){
        int last_digit = a % 10;
        if ( last_digit == 0 )
        {
            s1--;
            a/=10;
            continue;
        }
        else
        {
            int t = s1 - i ;
            while ( t-- )
                last_digit *= 10;
            na += last_digit;
        }
        a/=10;
    }
    for (int i = s2 ; i > 0 ; i-- ){
        int last_digit = b % 10;
        if ( last_digit == 0 )
        {
            s2--;
            b/=10;
            continue;
        }
        else
        {
            int t = s2 - i ;
            while ( t-- )
                last_digit *= 10;
            nb += last_digit;
        }
        b/=10;
    }
    for (int i = s3 ; i > 0 ; i-- ){
        int last_digit = c % 10;
        if ( last_digit == 0 )
        {
            s3--;
            c/=10;
            continue;
        }
        else
        {
            int t = s3 - i ;
            while ( t-- )
                last_digit *= 10;
            nc += last_digit;
        }
        c/=10;
    }
    if ( na + nb == nc )
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0;
}