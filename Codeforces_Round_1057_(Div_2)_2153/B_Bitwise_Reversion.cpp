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
    int x, y, z;
    cin >> x >> y >> z;
    bool flag = true;
    while ( x > 0 || y > 0 || z > 0 ) {
        int sum = (x&1) + (y&1) + (z&1);
        if ( sum == 2 ) {
            flag = false;
            break;
        }
        x>>=1,y>>=1,z>>=1;
    }
    cout << (flag?"YES\n":"NO\n");
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}