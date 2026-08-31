#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0 ; i < n ; i++ )
        cin >> a[i];
    for (int i = 0 ; i < m ; i++ )
        cin >> b[i];
    int p1 = 0, p2 = 0;
    int ans = 0;
    while (p2 < m) {
        if (p1 >= n || a[p1] > b[p2]) {
            ans += b[p2];
            p2++;
            continue;
        }
        b[p2] -= a[p1];
        p1++;
    }
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}