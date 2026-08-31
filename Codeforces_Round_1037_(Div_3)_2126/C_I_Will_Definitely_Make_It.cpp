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
    int n ,k; cin >> n >> k;
    int arr[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }
    int start = arr[k-1], water = 1, start_idx = 0;
    sort(arr,arr+n);
    for ( int i = 0 ; i < n ; i++ ) {
        if ( arr[i] == start ) {
            start_idx = i;
            break;
        }
    }
    bool ans = true;
    for ( int i = start_idx; i < n-1 ; i++ ) {
        int time = arr[i+1] - arr[i] ;
        if ( arr[i] < water + time - 1 ) {
            ans = false;
            break;
        }
        water += time ;
    }
    if ( ans ) cout << "YES\n" ;
    else cout << "NO\n" ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}