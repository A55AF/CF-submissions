#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main() {
     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
     int t;
     cin >> t ;
     while ( t-- ) {
          vector<ll> s(4);
          ll odd = 0;
          for ( int i = 0 ; i < 4 ; i++ ) {
               cin >> s[i] ;
               if ( i < 3 ) odd += (s[i]&1);
          }
          ll ans = 0;
          if (odd == 3)
               ans++;
          for ( int i = 0 ; i < 4 ; i++ ) {
               if (s[i]&1) s[i]--;
               ans += s[i]/2;
          }
          cout << ans << '\n' ;
     }
}
