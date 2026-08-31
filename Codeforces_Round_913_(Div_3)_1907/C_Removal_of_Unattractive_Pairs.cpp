#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e9
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n;
    cin >> n ;
    string s ;
    cin >>s ;
    int frq[26]{};
    for ( int i = 0 ; i < n ; i++ ) frq[s[i]-'a']++;
    sort(frq,frq+26);
    reverse(frq,frq+26);
    int mxFrq = frq[0];
    int ans = n%2;
    if (mxFrq > n/2 ) ans = 2*mxFrq - n ;
    cout << ans <<'\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}