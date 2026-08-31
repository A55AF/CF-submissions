#include<bits/stdc++.h>
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const long long inf = 1e18;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("plants.in","r",stdin);
    int n ;
    cin >> n ;
    long long g[n] , h[n] ;
    for( int i = 0 ; i < n ; i++ ) cin >> h[i] ;
    for( int i = 0 ; i < n ; i++ ) cin >> g[i] ;
    long long l = 0 , r = inf ;
    for( int i = 0 ; i < n-1 ; i++ ){
        long long ll = 0 , rr = inf ;
        if( h[i] <= h[i+1] ){
            if( g[i] > g[i+1] ) ll = 0 , rr = (abs(h[i]-h[i+1])/abs(g[i]-g[i+1]));
        }else{
            if( g[i] >= g[i+1] ) ll = inf , rr = -1 ;
            else ll = ((abs(h[i]-h[i+1])+abs(g[i]-g[i+1])-1)/abs(g[i]-g[i+1])) , rr = inf ;
        }
        // cout << ll << " " << rr << "\n" ;
        l = max(ll,l);
        r = min(rr,r);
    }
    // cout << "\n" ;
    // cout << l << " " << r << "\n" ;
    if(l<=r) cout << l ;
    else cout << "-1" ;
    return 0;
}