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
    int arr[4];
    for ( int i = 0 ; i < 4 ; i++ ) cin >> arr[i] ;
    int t = arr[0];
    sort(arr,arr+4, greater<>());
    for ( int i = 0 ; i < 4 ; i++ ) {
        if ( arr[i] == t ) {
            cout << i << '\n' ;
            break;
        }
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}