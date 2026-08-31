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
int n , l , r , x ;
vector<int> v;
int ans = 0;
void solve( int idx = 0 , int mx = -1 , int mn = INT_MAX , int sum = 0) {
    if( idx == n ) {
        if ( sum != mn ) {
            if ( sum>=l&&sum<=r && mx-mn>=x) {
                ans++;
            }
        }
        return;
    }
    solve(idx+1,max(mx,v[idx]),min(mn,v[idx]),sum+v[idx]);
    solve(idx+1,mx,mn,sum);
}
void accepted() {
    cin >> n >> l >> r >> x ;
    v.resize(n);
    for(int i = 0 ; i < n ; i++ ) {
        cin >> v[i] ;
    }
    sort(all(v));
    solve();
    cout << ans ;
}
int main() {
    ASSAF;
    int exe = 1;
//    cin >> exe;
    while (exe--){
        accepted();
//        cout << "\n" ;
    }
    return 0;
}