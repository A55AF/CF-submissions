#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e8
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
vector<vector<ll>> st(2001);
vector<vector<ll>> ans(2001);
const int sz = 2e6+1;
pair<ll,ll> idx[sz];
void precompute() {
    ll next = 1;
    for ( int i = 1 ; i < 2001; i++ ) {
        for ( int j = 0 ; j < i ; j++ ) {
            st[i].push_back(next);
            if ( next == (int)2e6 ) break;
            next++;
        }
    }
    ans[1].resize(2001);
    ans[2].resize(2001);
    ans[1][0] = 1;
    ans[2][0] = 5;
    ans[2][1] = 10;
    idx[1] = {1,0};
    idx[2] = {2,0};
    idx[3] = {2,1};
    for ( int i = 3 ; i < 2001 ; i++ ) {
        ans[i].resize(2001);
        for ( int j = 0 ; j < SZ(st[i]) ; j++ ) {
            idx[st[i][j]] = {i,j};
            ll cur = st[i][j] * st[i][j];
            if ( j < SZ(st[i]) ) cur += ans[i-1][j];
            if ( j ) cur += ans[i-1][j-1];
            if ( j && j < SZ(st[i]) )  cur -= ans[i-2][j-1];
            ans[i][j] = cur;
        }
    }
}
void accepted() {
    ll n ;
    cin >> n ;
    cout << ans[idx[n].F][idx[n].S] << '\n' ;
}

signed main() {
    ASSAF;
    precompute();
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}