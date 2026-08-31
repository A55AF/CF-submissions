#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define print(x,z) int y = 0; for ( auto i : x ) \
{if (y == z) break; cout << i << ' ' , y++;} cout << '\n';
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n , m , k ;
    cin >> n >> m >> k;
    const int sz = n+m;
    string ans;
    int mx ;
    if ( n > m ) mx = 0;
    else mx = 1;
    bool valid = true;
    if ( abs(n-m) > k ) valid = false;
    for ( int i = 0 , x = mx; i < sz ;i++ ) {
        if ( i < k ) {
            if ((x&&!m)||(!x&&!n)) valid = false;
            if (!x) ans += '0' , n--;
            else ans += '1' , m-- ;
        }else {
            x^=1;
            if ((x&&!m)||(!x&&!n)) x^=1;
            if (!x) ans += '0' , n-- ;
            else ans += '1' , m--;
        }
    }
    char last = ans[sz-1];
    int cnt = 1 ;
    for ( int i = sz-2; i >= 0 ; i-- ) {
        if ( ans[i] == last ) cnt++;
        else {
            if ( cnt > k ) {
                valid = false;
                break;
            }
            last = ans[i] , cnt = 1 ;
        }
    }
    if ( cnt > k ) valid = false;
    cout << (valid?ans:"-1") << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}