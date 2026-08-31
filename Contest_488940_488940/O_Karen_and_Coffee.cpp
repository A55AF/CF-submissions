#include<bits/stdc++.h>
const int N = 2e5+50;
typedef long long ll;
#define FIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
# define loop(n) for ( int i = 0 ; i < n ; i++ )
#define rall(a) a.rbegin(),a.rend()
#define all(a) a.begin(),a.end()
#define pf push_front
#define pb push_back
#define f(p) p.first
#define s(p) p.second
#define sz(x) x.size()

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

void solve() {
    int n , k , q ;
    cin >> n >> k >> q ;
    pair<int,int> p[n];
    loop(n)
    {
        int x , y ;
        cin >> x >> y ;
        f(p[i]) = x , s(p[i]) = y ;
    }
    int frq[N] = {0};
    loop(n)
    {
        frq[f(p[i])]++;
        frq[s(p[i])+1]--;
    }
    for ( int i = 1 ; i < N ; i++ )
        frq[i] += frq[i-1] ;
    int prfx[N] = {0};
    loop(N)
    {
        if ( frq[i] >= k )
            prfx[i]++;
    }
    for ( int i = 1 ; i < N ; i++ )
        prfx[i] += prfx[i-1] ;
    loop(q)
    {
        int a , b ;
        cin >> a >> b ;
        cout << prfx[b] - prfx[a-1] << "\n" ;
    }
}

int main() {
    FIO
    int t = 1;
    //cin >> t ;
    while (t--) {
        solve();
    }
    return 0;
}