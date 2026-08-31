#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define loop(i, st, en) for (int i = st; i < en; i++)
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\


const int mod = 1e9 + 7;
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }

void flip(char &c ){
    if (c=='U') c = 'D';
    else c = 'U';
}
void accepted()
{
    int n ;
    cin >> n ;
    vector<int> v1 ,v2 ;
    loop(i,0,n){
        int x ; cin >> x ;
        v1.pb(x);
    }loop(i,0,n){
        int x ; cin >> x ;
        v2.pb(x);
    }
    int cnt = 0;
    for ( int i = 0 , x = 0; i < n ; i++ )
    {
        if ( v1[x] > v2[i] ) cnt++ , v1.pop_back();
        else x++;
    }
    cout << cnt ;
}

int main()
{
    ASSAF;
    int exe = 1;
     cin >> exe;
    while (exe--)
    {
        accepted();
         cout << "\n";
    }
    return 0;
}