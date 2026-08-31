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

void solve() {
    string s ;
    cin >> s ;
    int a = count(s.begin() , s.end() , 'A' );
    int n = s.size() ;
    int mn = 1e9, cnt = 0 ;
    loop(n)
    {
        if ( s[i] == 'A' )
            cnt++;
        else
        {
            mn = min(cnt,mn);
            cnt = 0 ;
        }
    }
    mn = min(cnt,mn);
    cout << a - mn ;
}

int main() {
    FIO
    int t = 1;
    cin >> t ;
    while (t--) {
        solve() , cout << "\n" ;
    }
    return 0;
}