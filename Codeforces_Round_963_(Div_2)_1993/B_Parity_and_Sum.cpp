#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    ll n ;
    cin >> n ;
    ll arr[n] ;
    ll even = 0 , odd = 0 , mx = -1 ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
        if ( arr[i]&1 ) odd++ , mx = max(mx,arr[i]);
        else even++;
    }
    if ( even == n || odd == n ) return void( cout << 0 );
    sort(arr,arr+n);
    for ( int i = 0 ; i < n ; i++ ) {
        if ( arr[i]&1 ) continue;
        if ( arr[i] < mx ) mx = max(mx,arr[i]+mx);
        else {
            even++;
            break;
        }
    }
    cout << even;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}