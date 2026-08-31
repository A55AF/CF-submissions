#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define infl (long long)1e18
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 2e5+7;
vector<vector<int>> pf(N);
void prime_fact() {
    for ( int i = 2 ; i < N ; i++ ) {
        if ( SZ(pf[i]) ) continue;

        for ( int j = i ; j < N ; j += i )
            pf[j].push_back(i);
    }
}
void accepted() {
    int n;cin >> n;
    // F -> Cost, S -> Number
    vector<pair<int,int>> nums(n);
    for ( int i = 0 ; i < n ; i++ ) {
        int x; cin >> x;
        nums[i].S = x;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        int x; cin >> x;
        nums[i].F = x;
    }

    sort(all(nums));
    ll ans = nums[0].F + nums[1].F;
    vector<int> primes(N);
    for ( int i = 0 ; i < n ; i++ ) {
        int cur = nums[i].S ;
        for ( const int&prime : pf[cur]) {
            if ( primes[prime] )
                ans = 0;
            primes[prime]++;
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        int tmp = nums[i].S;
        for ( const int&prime : pf[tmp] )
            primes[prime]--;

        int cur = nums[i].S + 1 ;
        for ( const int&prime : pf[cur]) {
            if ( primes[prime] )
                ans = min(ans, nums[i].F * 1ll);
        }

        tmp = nums[i].S;
        for ( const int&prime : pf[tmp] )
            primes[prime]++;
    }

    vector<int> v;
    for ( int i = 1 ; i < n; i ++ ) {
        for ( const int&prime : pf[nums[i].S] )
            v.push_back(prime);
    }

    for ( const int&i : v) {
        ll mult =  i - (nums[0].S % i);
        if ( mult == i ) mult = 0;

        ll cost = mult * nums[0].F;
        ans = min( cost, ans );
    }

    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    prime_fact();
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}