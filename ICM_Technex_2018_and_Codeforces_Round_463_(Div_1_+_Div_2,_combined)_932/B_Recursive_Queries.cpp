#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 1e6+7;
int f(int n) {
    int res = 1;
    while(n>0) {
        if(n%10) res *= n%10;
        n/=10;
    }
    return res;
}
int g(int n) {
    if( n < 10 ) return n;
    return g(f(n));
}
void accepted() {
    int prfx[10][N];
    memset(prfx,0,sizeof prfx);
    for(int n = 1 ; n < N ; n++ ) {
        int res = g(n);
        prfx[res][n]++;
    }
    for( int i = 0 ; i < 10 ; i++ ) {
        for( int j = 1; j < N ; j++ ) {
            prfx[i][j] += prfx[i][j-1];
        }
    }
    int q;cin>>q;
    while(q--) {
        int l , r , k ;
        cin >> l >> r >> k ;
        cout << prfx[k][r] - prfx[k][l-1] << "\n" ;
    }
}

int main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--){
        accepted();
        // cout << "\n" ;
    }
    return 0;
}