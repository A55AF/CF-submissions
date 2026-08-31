#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
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
    int n , m;
    cin >> n >> m;
    vector<pair<int,int>> v(n+1);
    int ans = 0;
    int cur = 0;
    int time = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        pair<int,int> p;
        cin >> p.F >> p.S;
        time = abs(time - p.F);
        ans += time;
        if ( p.S == cur ) ans -= (time&1);
        else ans -= !(time&1);
        cur = p.S;
        time = p.F ;
    }
    ans += abs(m - time);
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}