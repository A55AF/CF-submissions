#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e8
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
    vector<int> v(4,inf);
    for ( int i = 0 ; i < n ; i++ ) {
        int t; string s;
        cin >> t >> s ;
        if ( s == "00" ) v[0] = min(v[0] , t);
        else if ( s == "01" ) v[1] = min(v[1], t);
        else if ( s == "10" ) v[2] = min(v[2] ,t );
        else v[3] = min(v[3], t);
    }
    int ans = 2e7+1;
    ans = min({ans, v[3] , v[1] + v[2] });
    if ( ans == 2e7+1 ) ans = -1;
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}