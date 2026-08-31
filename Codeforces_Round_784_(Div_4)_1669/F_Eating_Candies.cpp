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
    int n;
    cin >> n ;
    int arr[n];
    deque<int> prfx(n), sufx(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }
    for ( int i = 0 , j = n - i - 1; i < n ; i++ , j-- ) {
        prfx[i] += arr[i] ;
        sufx[j] += arr[j] ;
        if ( i ) prfx[i] += prfx[i-1] ;
        if ( j < n - 1 ) sufx[j] += sufx[j+1];
    }
    prfx.push_front(0);
    sufx.push_back(0);
    int ans = 0;
    int alice = 0, bob = n;
    while ( alice <= bob ) {
        if ( prfx[alice] == sufx[bob] ) {
            ans = alice + (n - bob);
            alice++;
        } else if ( prfx[alice] > sufx[bob] ) {
            bob--;
        } else if ( prfx[alice] < sufx[bob] ) {
            alice++;
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