#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define print(x,z) int y = 0; for ( auto i : x ) \
{if (y == z) break; cout << i << ' ' , y++;} cout << '\n';
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define pb push_back
#define S second
#define F first
#define inf 1e9
#define infl 3e18
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
vector<int> v ;
int lucky(int n) {
    int mx = -1 , mn = 10 ;
    while ( n > 0 ) {
        int d = n%10 ;
        mn = min(mn,d);
        mx = max(mx,d);
        n = n/10 ;
    }
    return mx - mn ;
}
void accepted() {
    int l ,r ;
    cin >> l >> r ;
    int ans = -1 , luck = -1 ;
    for ( int i = l ; i <= r ; i++ ) {
        int cur = lucky(i);
        if ( cur > luck ) luck = cur , ans = i ;
        if ( luck == 9 ) break;
    }
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- ) {
        accepted();
        cout << '\n' ;
    }
    return 0;
}