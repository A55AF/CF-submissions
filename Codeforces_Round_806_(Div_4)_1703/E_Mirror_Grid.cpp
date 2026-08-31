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
    int n ; cin>>n;
    vector<string> v;
    for (int i = 0; i < n ; i++) {
        string s;cin >> s;
        v.push_back(s);
    }
    int lvl = 0;
    int ans = 0;
    while (lvl < n/2 ) {
        for ( int i = lvl ; i < n-lvl-1 ; i++ ) {
            int x = lvl, y = i, end = n-lvl-1, dis = n-2*lvl-1;
            int zero = v[x][y] == '0' , one = v[x][y] == '1';
            for ( int j = 0 ; j < 3 ; j++ ) {
                if ( x == lvl ) { 
                    if ( y != lvl ) {
                        x = y;
                        y = end;
                    } else y = end;
                } else if ( x == end ) { 
                    if ( y != end ) {
                        x = y;
                        y = lvl;
                    } else y = lvl;
                } else if ( y == end ) {
                    if ( x != lvl ) {
                        y = end-x+lvl;
                        x = end;
                    } else x = end;
                }
                zero += (v[x][y] == '0');
                one += (v[x][y] == '1');
            }
            ans += min(one,zero);
        }
        lvl++;
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