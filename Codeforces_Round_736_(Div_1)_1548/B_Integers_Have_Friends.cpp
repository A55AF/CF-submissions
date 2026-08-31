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
struct SparseTable {
    vector<vector<ll>> table;
    vector<ll> lg;

    SparseTable(vector<ll>&v) {
        ll n = v.size();
        table = vector<vector<ll>>(n+7, vector<ll>(25));
        lg = vector<ll>(n+7);

        lg[1] = 0;
        for ( int i = 2 ; i <= n ; i++ )
            lg[i] = lg[i >> 1] + 1;

        for ( int i = 0 ; i < n ; i++ )
            table[i][0] = v[i];

        for ( int j = 1 ; j < 25 ; j++ )
            for ( int i = 0 ; i + (1 << j) - 1 <= n ; i++ )
                table[i][j] = f(table[i][j-1], table[i + (1 << (j-1))][j-1]);
    }

    ll f(ll a, ll b) {
        return __gcd(a, b);
    }

    ll q(ll l, ll r) {
        ll lg_sz = lg[r - l + 1];
        return f(table[l][lg_sz], table[r - (1 << lg_sz) + 1][lg_sz]);
    }
};
void accepted() {
    ll n;
    cin >> n ;
    vector<ll> v(n), diff;
    for ( int i = 0 ; i < n;  i++ )
        cin >> v[i] ;

    for ( int i = 0 ; i < n - 1 ; i++ )
        diff.push_back(abs(v[i] - v[i+1]));

    SparseTable sp(diff);

    ll ans = 1;
    for ( int i = 0 ; i < diff.size() ; i++ ) {
        ll st = i, en = diff.size() - 1;
        while ( st <= en ) {
            ll mid = st + en >> 1;
            ll val = sp.q(i, mid);

            if ( val >= 2 ) {
                ans = max(ans, mid - i + 2);
                st = mid + 1;
            } else {
                en = mid - 1;
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