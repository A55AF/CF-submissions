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
    ll k , x;
    cin >> k >> x ;
    vector<int> ans;
    ll target = powl(2,k), total = 2*target;
    while ( x != target ) {
        if ( x < target ) {
            x *= 2;
            ans.push_back(1);
        } else if ( x > target ) {
            x = 2*x - total;
            ans.push_back(2);
        }
    }
    reverse(all(ans));
    cout << SZ(ans) << '\n' ;
    for ( const int&op : ans ) cout << op << ' ';
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}