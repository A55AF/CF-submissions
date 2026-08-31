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
    int n, s;
    cin >> n >> s ;
    int arr[n];
    deque<int> prfx(n), suffix(n);
    for ( int i = 0 ; i < n ; i++ ) cin >> arr[i];
    for ( int i = 0, j = n-1; i < n ; i++, j--) {
        prfx[i] = arr[i];
        suffix[i] = arr[j];
        if ( i ) {
            prfx[i] += prfx[i-1];
            suffix[i] += suffix[i-1];
        }
    }
    int ans = inf;
    int sum = suffix.back();
    prfx.push_front(0);
    suffix.push_front(0);
    if ( s > sum ) return void(cout << -1 << '\n' );
    for ( int i = 0 ; i <= n ; i++ ) {
        int mn = inf;
        int l = 0, r = n;
        while ( l <= r ) {
            int mid = (l+r)/2;
            int val = sum - suffix[mid] - prfx[i];
            if ( val == s ) {
                mn = min(mn, i + mid);
                r = mid - 1;
            } else if ( val > s ) {
                l = mid + 1;
            } else if ( val < s ) {
                r = mid - 1;
            }
        }
        ans = min(ans, mn);
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