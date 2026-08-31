#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define infl (long long)1e18
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
    cin >> n;
    string s, t;
    cin >> s >> t ;
    int frq1[26]{}, frq2[26]{};
    for ( int i = 0 ; i < n ; i++ ) {
        int idx1 = s[i] - 'a', idx2 = t[i] - 'a';
        frq1[idx1]++, frq2[idx2]++;
    }
    bool ans = true;
    for ( int i = 0 ; i < 26 ; i++ ) {
        if ( frq1[i] != frq2[i] ) {
            ans = false;
            break;
        }
    }
    cout << (ans?"YES\n":"NO\n") ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
