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

void in_v(vector<int> &v, int sz) {
    loop(sz) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void out_v(vector<int> &v, int sz) {
    loop(sz)cout << v[i] << " ";
}

ll sum( ll x )
{
    return ( x * (x+1) ) /2 ;
}

void solve() {
    ll m , n ;
    cin >> n >> m ;
    ll a , b ;
    ll l = 0 , r = n ;
    ll max = 0 ;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if ( sum(mid) >= m )
            max = mid , r = mid - 1 ;
        else
            l = mid + 1 ;
    }
    a = max - 1 , b = a - (sum(max) - m );
    cout << a << " " << b ;
}

int main() {
    FIO
    int t = 1 ;
    cin >> t ;
    int x = t ;
    while (t--) {
        cout << "Case " << x - t << ": " ;
        solve();
        cout << "\n" ;
    }
    return 0;
}