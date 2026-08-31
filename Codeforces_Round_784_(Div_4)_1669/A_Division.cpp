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
    int rate;
    cin >> rate ;
    if ( rate < 1400 ) cout << "Division 4" ;
    else if ( rate >= 1400 && rate < 1600 ) cout << "Division 3" ;
    else if ( rate >= 1600 && rate < 1900 ) cout << "Division 2" ;
    else if ( rate >= 1900 ) cout << "Division 1" ;
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}