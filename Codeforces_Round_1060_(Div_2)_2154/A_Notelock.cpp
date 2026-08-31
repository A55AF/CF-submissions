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
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s ;
    int prfx[n]{};
    for ( int i = 0 ; i < n ; i++ ) {
        prfx[i] = 1*(s[i] == '1');
        if (i) prfx[i] += prfx[i-1];
    }
    int edit = 0;
    int ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if (s[i] == '1') {
            int low = i-k, high = i-1;
            int prev = -edit;
            if ( high >= 0 ) prev += prfx[high];
            if ( low >= 0 ) prev -= prfx[low];
            if ( !prev ) {
                ans++;
            }
        }
    }
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}