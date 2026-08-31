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
    int n, q;
    cin >> n >> q ;
    vector<int> a(n), b(n);
    for ( int i = 0 ; i < n ; i++ )
        cin >> a[i];
    for ( int i = 0 ; i < n ; i++ )
        cin >> b[i] , a[i] = max(a[i], b[i]);

    for ( int i = n - 1; i >= 1 ; i-- ) {
        a[i-1] = max(a[i-1], a[i]);
    }

    vector<int> prfx(n+1);
    for ( int i = 1 ; i <= n ; i++ ) {
        prfx[i] += prfx[i-1] + a[i-1];
    }

    while ( q-- ) {
        int l, r;
        cin >> l >> r;
        cout << prfx[r] - prfx[l-1] << ' ' ;
    }
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}