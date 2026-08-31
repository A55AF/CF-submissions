#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e9
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 2e5 + 7 ;
void accepted() {
    int n ; char c ;
    cin >> n >>c ;
    string s ;
    cin >> s ;
    s += s ;
    int ans = -1 ;
    if ( c == 'g' ) return void ( cout << 0 ) ;
    vector<int> v , g;
    for ( int i = 0 ; i < SZ(s) ; i++ ) {
        if ( s[i] == c ) v.pb(i);
        if ( s[i] == 'g' ) g.pb(i);
    }
    for ( int i = 0 ; i < SZ(v) ; i++ ) {
        int l = 0 , r = SZ(g) -1 ;
        int cur = inf ;
        while ( l <= r ) {
            int mid = (l+r)/2;
            int val = g[mid] ;
            if ( val < v[i] ) l = mid + 1 ;
            else if ( val >= v[i] ) cur = min(cur,val-v[i]) , r = mid - 1 ;
        }
        if ( cur != inf ) ans = max(cur,ans);
    }
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}