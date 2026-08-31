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
    int n ;
    cin >> n ;
    int sum = -n+1;
    for ( int i = 0 ; i < n ; i ++ ) {
        int x ;cin >> x ;
        sum+=x;
    }
    cout << sum << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}
