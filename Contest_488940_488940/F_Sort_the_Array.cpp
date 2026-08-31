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
    int n ;
    cin >> n ;
    vector<int> v ;
    loop(n)
    {
        int x ;
        cin >> x ;
        v.pb(x);
    }
    vector<pair<int, int>> p;
    int l = 0 , r = 0 ;
    loop(n - 1)
    {
        if ( v[i] >= v[i + 1] )
            r++;
        else if ( v[i] < v[i + 1])
        {
            if ( l != r )
                p.pb(make_pair(l, r)) , l = r + 1 , r++ ;
            else
                l++ , r = l;
        }
    }
    if ( l != r )
        p.pb(make_pair(l, r));
    if ( p.size() > 1 )
        cout << "no" ;
    else if ( p.empty() )
        cout << "yes\n1 1" ;
    else
    {
        bool check = true;
        if ( s(p[0]) != n - 1 )
        {
            if ( v[f(p[0])] > v[s(p[0]) + 1] )
                check = false;
        }
        if ( f(p[0]) != 0 )
        {
            if ( v[s(p[0])] < v[f(p[0]) - 1] )
                check = false ;
        }
        if ( check )
            ++f(p[0]), ++s(p[0]), cout << "yes\n" << f(p[0]) << " " << s(p[0]);
        else
            cout << "no" ;
    }
    // loop(p.size())
    // {
    //     cout << f(p[i]) << " " << s(p[i]) << "\n";
    // }
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