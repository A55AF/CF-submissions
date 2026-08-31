#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

bool isPrime(long long x )
{
    for ( int i = 2 ; i < x ; i++ )
    {
        if( x%i == 0 )
            return false;
    }
    if ( x == 1 )
        return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n_10;
        long long n_7 = 0;
        cin >> n_10 ;
        vector<int> v;
        bool base_10 = isPrime(n_10) ;
        while ( n_10 != 0 )
        {
            v.push_back(n_10%7);
            n_10 = n_10 / 7;
        }
        for ( int i = v.size()-1 ; i >= 0 ; i-- )
        {
            n_7 += v.at(i) ;
            if ( i != 0 )
                n_7*=10;
        }
        bool base_7 = isPrime(n_7) ;
        if ( base_10 == true && base_7 == true )
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
