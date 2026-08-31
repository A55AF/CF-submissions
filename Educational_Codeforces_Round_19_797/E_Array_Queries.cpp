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
const int N = 1e5+7, SQ = 340;
int n, a[N], dp[N][SQ];
void accepted() {
    cin >> n;
    for ( int i = 0 ; i < n ; i++ )
        cin >> a[i];

    for(int k = 1; k < SQ; k++ ) {
        dp[n][k] = 1;
        for( int p = n ; p >= 0; p-- ) {
            if(p+a[p-1]+k > n) dp[p][k] = 1;
            else dp[p][k] += dp[p+a[p-1]+k][k] + 1;
        }
    }
    int q;cin >> q;
    while (q--) {
        int p, k;
        cin >> p >> k ;
        if (k < SQ) {
            cout << dp[p][k];
        } else {
            int op = 0, cur = p;
            while ( cur <= n ) {
                cur += a[cur-1]+k;
                op++;
            }
            cout << op ;
        }
        cout << '\n' ;
    }
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}