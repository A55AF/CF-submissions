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
struct SparseTable {
    vector<vector<ll>> mn, mx;
    vector<ll> lg;
    int n, pw = 25;

    SparseTable(vector<ll>&v) {
        n = v.size();
        mn = vector<vector<ll>>(n + 7, vector<ll>(pw));
        mx = vector<vector<ll>>(n + 7, vector<ll>(pw));
        lg = vector<ll>(n+7);

        for ( int i = 0 ; i < n ; i++ )
            mn[i][0] = mx[i][0] = v[i];

        lg[1] = 0;
        for ( int i = 2 ; i <= n ; i++ )
            lg[i] = lg[i >> 1] + 1;


        for ( int j = 1; j < pw ; j++ ){
            for ( int i = 0 ; i + (1 << j) - 1 < n ; i++ ){
                mn[i][j] = merge1(mn[i][j-1], mn[i + (1 << (j-1))][j-1]);
                mx[i][j] = merge2(mx[i][j-1], mx[i + (1 << (j-1))][j-1]);
            }
        }
    }

    ll merge1(ll a, ll b) {
        return min(a, b);
    }

    ll merge2(ll a, ll b) {
        return max(a, b);
    }

    pair<ll,ll> query(ll l, ll r) {
        ll lg_sz = lg[r - l + 1];
        return {
            merge1(mn[l][lg_sz], mn[r - (1 << lg_sz) + 1][lg_sz]),
            merge2(mx[l][lg_sz], mx[r - (1 << lg_sz) + 1][lg_sz])
        };
    }
};
void accepted() {
    int n;
    cin >> n ;
    vector<ll> v(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i];
    }
    SparseTable sp(v);
    int l = 0, r = n-1;
    while (l <= r) {
        auto p = sp.query(l, r);
        bool moved = false;
        if(v[l] == p.first || v[l] == p.second) l++, moved = true;
        if(v[r] == p.first || v[r] == p.second) r--, moved = true;
        if(!moved) break;
    }
    if(r <= l) cout << -1;
    else cout << l+1 << ' ' << r+1;
    cout << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}