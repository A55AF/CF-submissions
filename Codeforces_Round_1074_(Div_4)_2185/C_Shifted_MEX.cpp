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
int mex(vector<int> v) {
    int find = 0;
    sort(all(v));
    for ( int i = 0 ; i < SZ(v) ; i++ ) {
        if ( v[i] < find ) continue;
        if ( find != v[i] ) return find;
        find++;
    }
    return find;
}
void accepted() {
    int n;
    cin >> n;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) cin >> v[i] ;
    int ans = mex(v);
    for ( int i = 0 ; i < n ; i++ ) {
        int x = -v[i];
        vector<int> tmp = v;
        for ( int j = 0 ; j < n ; j++ ) {
            tmp[j] += x;
        }
        ans = max(ans, mex(tmp));
    }
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}