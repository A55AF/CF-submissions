#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll x ;
    cin >> x;
    ll size_bag = 1,total_sum = 0, start = 1;
    int cnt = 0 ;
    while ( true )
    {
        ll bag_sum = 0 ;
        for ( int i = 0 ; i < size_bag ; i++ )
        {
            bag_sum += start;
            start+=2;
        }
        start--,total_sum += bag_sum;
        if ( total_sum <= x )
            cnt++,size_bag++;
        else
            break;
    }
    cout << cnt ;
    return 0;
}
