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
    int n, m , h;
    cin >> n >> m >> h;
    vector<int> a(n);
    int mx = -1;
    for ( int i = 0 ; i < n ; i++ ) cin >> a[i] , mx = max(mx, a[i]);
    vector<int> add(n);
    set<int> reset;
    for ( int i = 0 ; i < m ; i++ ) {
        int b, c;
        cin >> b >> c ;
        b--;
        add[b] += c;
        reset.insert(b);
        if ( add[b] + a[b] > h ) {
            for ( const int&j : reset ) {
                add[j] = 0;
            }
            reset.clear();
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        cout << a[i] + add[i] << ' ' ;
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