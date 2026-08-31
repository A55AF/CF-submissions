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
    ll n , m , k ;
    cin >> n >> m >> k ;
    int arr[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }
    sort(arr,arr+n,greater<>());
    ll sum = 0;
    for ( int i = 0 ; i < m ; i++ ) sum += arr[i] ;
    ll ans = k/sum * m ;
    ll rem = k%sum;
    for ( int i = 0 ; i < m && rem > 0; i++ ) {
        rem -= arr[i];
        ans++;
    }
    cout << ans << '\n' ;
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}