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
    string inp;
    cin >> inp;
    int prfx[SZ(inp)]{};
    vector<pair<int,int>> ans;
    ans.push_back({0,0});
    for ( int i = 1 ; i < SZ(inp) ; i++ ) {
        if ( inp[i-1] == '(' ) prfx[i]++;
        else prfx[i]--;
        prfx[i] += prfx[i-1];
        ans.push_back({prfx[i],-i});
    }
    sort(all(ans));
    for ( int i = 0 ; i < SZ(ans) ; i++ ) {
        cout << inp[-ans[i].S];
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}