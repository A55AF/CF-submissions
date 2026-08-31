#include<bits/stdc++.h>

const int N = 1e5 + 7;
const int mod = 1e9 + 7;
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
    int n , m ;
    cin >> n >> m ;
    ll arr[n][m];
    for ( int i = 0 ; i < n ; i++ )
        for ( int j = 0 ; j < m ; j++ )
            cin >> arr[i][j] ;
    ll pip = 0, nagini = 0 ;
    for ( int i = 0 , x = 0; i < n ; i++ )
    {
        if ( i % 2 == 0 )
        {
            if ( x % 2 == 0 )
                pip += arr[i][0];
            else
                pip += arr[i][m - 1] ;
            x++;
        }
        else
        {
            for ( int j = 0 ; j < m ; j++ )
                pip += arr[i][j];
        }
    }
    for ( int i = n - 1 , x = 0; i >= 0 ; i-- )
    {
        if ( (i - (n - 1) ) % 2 == 0 )
        {
            if ( x % 2 == 0 )
                nagini += arr[i][m - 1] ;
            else
                nagini += arr[i][0];
            x++;
        }
        else
        {
            for ( int j = 0 ; j < m ; j++ )
                nagini += arr[i][j] ;
        }
    }
    // cout << pip << " " << nagini << "\n" ;
    if ( nagini > pip )
        cout << "Nagini" ;
    else
        cout << "Pip" ;
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