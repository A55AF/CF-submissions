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
    vector<string> v(8);
    for ( int i = 0; i < 8 ; i++ ) {
        cin >> v[i];
    }
    int digx[] = {-1,-1,1,1};
    int digy[] = {1,-1,1,-1};
    for ( int i = 1 ; i < 7 ; i++ ) {
        for ( int j = 1 ; j < 7 ; j++ ) {
            if ( v[i][j] == '#' ) {
                int cur = 0 ;
                for ( int u = 0 ; u < 4 ; u++ ) {
                    int tx = i + digx[u], ty = j + digy[u];
                    if ( v[tx][ty] == '#' ) cur++;
                }
                if ( cur == 4 ) {
                    return void(cout << i+1 << ' ' << j+1 << '\n');
                }
            }
        }
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}