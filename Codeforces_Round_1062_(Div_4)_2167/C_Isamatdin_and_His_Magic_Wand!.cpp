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
    int n;
    cin >> n;
    int arr[n];
    int odd = 0, even = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
        odd += (arr[i]&1);
        even += (!(arr[i]&1));
    }
    if ( even != 0 && odd != 0 ) sort(arr,arr+n);
    for ( int i = 0 ; i < n ; i++ ) cout << arr[i] << ' ';
    cout << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
