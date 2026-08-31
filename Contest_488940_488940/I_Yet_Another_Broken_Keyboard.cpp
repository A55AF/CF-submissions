#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n , cnt = 0 , total = 0;
    cin >> n ;
    short k ;
    cin >> k ;
    string s ;
    cin >> s ;
    char letters[k];
    for ( int i = 0 ; i < k ; i++ )
        cin >> letters[i] ;
    for( int i = 0 ; i < n ; i++ )
    {
        bool check = false;
        for ( int j = 0 ; j < k ; j++ )
        {
            if ( s[i] == letters[j] )
            {
                check = true;
                break;
            }
        }
        if ( check )
        {
            cnt++;
            if ( i == n-1 )
            total += (cnt*(cnt+1))/2;
        }

        else
            total += (cnt*(cnt+1))/2 , cnt = 0;
    }
    cout << total ;
    return 0;
}
