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
const int N = 1e4 + 7;
void accepted() {
    int n ;
    cin >> n ;
    vector<int> v(n);
    map<int,int> frq;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i] ;
        frq[v[i]]++;
    }
    int d = 0;
    for ( const auto&[f,s] : frq ) {
        d += s - 1;
    }
    n -= d + (d&1) ;
    cout << n << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}