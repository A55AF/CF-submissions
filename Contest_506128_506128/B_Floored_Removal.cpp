#include<bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define f(a) a.first
#define s(a) a.second
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

void accepted()
{
    int n , d , k;
    cin >> n >> d >> k ;
    vector<ll> v;
    for ( int i = 0 ; i < n ; i++ )
    {
        ll x;cin>>x;
        v.pb(x);
    }
    int l = k;
    for ( int i = 0 ; i < n ; i++ )
    {
        k = l;
        if ( d == 1 )
            k = 0;
        while(k--)
        {
            if ( v[i] == 0 )
                break;
            v[i] /= d;
        }
        if ( v[i] )
            cout << v[i] << " " ;
    }
}

int main()
{
    ASSAF;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        accepted();
        //cout << "\n";
    }
    return 0;
}
