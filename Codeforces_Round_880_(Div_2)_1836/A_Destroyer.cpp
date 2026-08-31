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
    int frq[200]{} , mx = -1 ;
    for ( int i = 0 ; i < n ; i++ ) {
        int x ;
        cin >> x ;
        frq[x]++;
        mx = max(mx,x);
    }
    bool valid = 1;
    for ( int i = 0 ; i < mx ; i++ ) {
        if ( frq[i+1] > frq[i] ) {
            valid = 0;
            break;
        }
    }
    cout << (valid?"YES":"NO");
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