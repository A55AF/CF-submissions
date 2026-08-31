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
ll n , m ;
bool solve( ll num) {
    if ( num == m ) return true;
    if ( num%3 ) return false;

    return solve(num/3) | solve(num/3*2);
}
void accepted() {
    cin >> n >> m;
    bool ans = solve(n);
    if ( ans ) cout << "YES\n";
    else cout << "NO\n" ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}