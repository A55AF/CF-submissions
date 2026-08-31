#include<bits/stdc++.h>

typedef long long ll;
#define FIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
# define loop(n) for ( int i = 0 ; i < n ; i++ )
#define rall(a) a.rbegin(),a.rend()
#define all(a) a.begin(),a.end()
#define pf push_front
#define pb push_back
#define f(p) p.first
#define s(p) p.second

using namespace std;

void in_v(vector<ll> &v, int sz) {
    loop(sz) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
}

void out_v(vector<ll> &v, int sz) {
    loop(sz)cout << v[i] << " ";
}

void solve() {
    ll n , q ;
    cin >> n >> q;
    vector<ll> v ;
    in_v(v,n);
    for ( int i = 1 ; i < n ; i++ )
    {
        v[i] += v[i-1] ;
    }
    while ( q-- )
    {
        ll a , b , l , r ;
        cin >> a >> b >> l >> r ;
        ll sum = 0;
        if ( l == 1 )
            sum += v[r-1];
        else
            sum += v[r-1] - v[l-2];
        sum *= a ;
        sum += (b * (r - (l - 1)));
        cout << sum << "\n" ;
    }
}

int main() {
    FIO
    int t = 1 ;
//    cin >> t ;
    while (t--) {
        solve();
//        cout << "\n" ;
    }
    return 0;
}