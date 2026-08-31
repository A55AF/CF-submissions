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
    int n;
    cin >> n ;
    int frq[n+5] {};
    for ( int i = 0 ; i < n ; i++ ) {
        int x;cin>>x;
        frq[x]++;
    }
    bool valid = true;
    for( int i = 1 ; i <= n ; i++ ) {
        int val = max(0,frq[i]-2);
        frq[i+1] += val,frq[i] -= val;
        if ( frq[i]&1 ) valid = false;
    }
    cout << (valid?"YES\n":"NO\n");
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}