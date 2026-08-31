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
    ll n ; cin >> n ;
    ll arr[n];
    for ( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;

    deque<ll> dq;
    ll all = arr[0];
    for ( int i = 1 ; i < n ; i++ ) {
        if ( (arr[i] >= 0 && all >= 0) || ( arr[i] < 0 && all < 0 )) {
            all += arr[i];
        }
        else if ( (arr[i] < 0 && all >= 0) || ( arr[i] >= 0 && all < 0 )) {
            dq.push_back(all);
            all = arr[i];
        }
    }

    ll ans = 0;
    ans += -all*(all<0);
    if (all>0) dq.push_back(all);
    if (SZ(dq) && dq.front() >= 0 ) ans += dq.front(),dq.pop_front();

    ll pos[SZ(dq)+1] {}, neg[SZ(dq)+1]{};
    for ( int i = 0 ; i < SZ(dq) ; i++ ) {
        if ( dq[i] >= 0 ) pos[i+1] += dq[i];
        else neg[i+1] += -dq[i];

        if (i) pos[i+1] += pos[i] , neg[i+1] += neg[i];
    }

    ll mx = -1 ;
    for ( int i = 0 ; i <= SZ(dq) ; i++ ) {
        mx = max(mx,(pos[i]) + (neg[SZ(dq)] - neg[i]));
    }
    ans += mx*(mx!=-1) ;
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
    return 0;
}