#include<bits/stdc++.h>

const int N = 1e5 + 7;
//const int mod = 1e9 + 7;
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

const ll mod = 100;

void out_v(vector<int> &v, int sz) {
    loop(sz)cout << v[i] << " ";
}

void solve() {
    int n ;
    cin >> n ;
    int a[n] , b[n] ;
    for (int i = 0; i < n ; i++)
    {
        cin >> a[i] ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> b[i] ;
    }
    for ( int i = 0 , j = 0; i < 2 * n ; i++ )
    {
        if ( i >= n )
        {
            cout << a[j] << " ";
            j++;
            continue;
        }
        cout << b[i] << " " ;
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