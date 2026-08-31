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
    multiset<string> v;
    vector<vector<pair<string,string>>> subs(n);
    string ans;
    ans.resize(n,'0');
    for ( int i = 0 ; i < n ; i++ ) {
        string s;
        cin >> s ;
        v.insert(s);
        for ( int j = 0 ; j < SZ(s) - 1 ; j++ ) {
            string s1 = s.substr(0,j+1);
            string s2 = s.substr(j+1);
            subs[i].emplace_back(s1,s2);
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        for ( const auto&[s1,s2] : subs[i] ) {
            if ( v.find(s1) != v.end() && v.find(s2) != v.end()) {
                ans[i] = '1' ;
            }
        }
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