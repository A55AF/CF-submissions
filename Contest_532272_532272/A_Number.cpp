#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
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
    const int N = 8e6+10;
    bool sieve[N]{};
    for(int i = 2; i*i < N; i++) {
        if(sieve[i]) continue;
        for ( int j = i*i ; j < N ; j+=i) {
            sieve[j] = true;
        }
    }
    int cnt = 0;
    int n ;cin>>n;
    for(int i = 1 ; i < N ; i++ ) {
        if ( cnt == n ) break;
        if(!sieve[i]) cout << i << " " , cnt++;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--){
        accepted();
        // cout << "\n" ;
    }
    return 0;
}