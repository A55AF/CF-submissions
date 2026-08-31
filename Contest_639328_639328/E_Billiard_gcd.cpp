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
const int N = 2e5+8;
void accepted() {
    int n ;
    cin >> n ;
    int arr[n] ;
    map<int,int,greater<>> frq;
    int mx = -1;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
        mx = max(arr[i],mx);
    }
    frq[1] = n;
    for ( int i = 0 ; i < n ; i++ ) {
        frq[arr[i]]++;
        for ( int j = 2 ; j * j <= arr[i] ; j++ ) {
            if ( !(arr[i]%j) ) {
                frq[j]++;
                if ( j * j != arr[i] ) {
                    frq[arr[i]/j]++;
                }
            }
        }
    }
    for ( const auto&[num,f] : frq ) {
        if ( f >= n-1 ) {
            cout << num ;
            return;
        }
    }
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}