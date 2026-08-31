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
    int n ;
    cin >> n ;
    vector<string> v;
    ll frq[2][26] = {};
    map<string,ll> same;
    for ( int i = 0 ; i < n ; i++ ) {
        string inp;
        cin >> inp;
        v.push_back(inp);
        frq[0][inp[0]-'a']++;
        frq[1][inp[1]-'a']++;
        same[inp]++;
    }
    ll ans = 0;
    for ( int i = 0 ; i < 26; i++ ) {
        ll cur = frq[0][i];
        ans += (cur*cur-cur)/2;
    }
    for ( int i = 0 ; i < 26; i++ ) {
        ll cur = frq[1][i];
        ans += (cur*cur-cur)/2;
    }
    for ( const auto& [str,f] : same ) {
        ans -= (f*f - f);
    }
    cout << ans << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}