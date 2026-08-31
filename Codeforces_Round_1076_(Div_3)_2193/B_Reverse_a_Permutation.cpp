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
    int n ;
    cin >> n ;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ )
        cin >> v[i] ;
    int first = 0;
    for ( int i = 0, find = n ; i < n ; i++ ) {
        if ( v[first] != find ) break;
        find--, first++;
    }
    int mx = -1, idx = -1;
    for ( int i = first + 1 ; i < n ; i++ ) {
        if ( v[i] > mx ) {
            mx = v[i], idx = i;
        }
    }
    for ( int i = 0 ; i < first ; i++ )
        cout << v[i] << ' ';
    for ( int i = idx ; i >= first && idx != -1; i-- )
        cout << v[i] << ' ' ;
    for ( int i = idx + 1 ; i < n && idx != -1; i++ )
        cout << v[i] << ' ' ;
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}