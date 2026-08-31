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
    int n , dist = 0;
    cin >> n ;
    int arr[n] , frq[n+1]{};
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
        frq[arr[i]]++;
    }
    int l = 0, r = 0;
    vector<pair<int,pair<int,int>>> v;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( frq[arr[i]] == 1) r++;
        else if ( frq[arr[i]] > 1 ){
            if ( l != r )
                v.push_back({abs(l-r),{l,r-1}});
            r++;
            l = r;
        }
        dist += (frq[arr[i]] == 1) ;
    }
    if ( l != r && n > 1) v.push_back({abs(l-r),{l,r-1}});
    sort(all(v));
    pair<int,pair<int,int>> ans = {0,{0,0}};
    if (SZ(v)) ans = v.back();
    if ( n - dist == n-ans.F+dist+ans.F )
        cout << 0;
    else cout << ans.S.F+1 << ' ' <<  ans.S.S+1 ;
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}