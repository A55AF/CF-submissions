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
const int N = 2e5+7, SQ = 340;
ll n;
vector<ll> buc[N/SQ+1];
vector<ll> lazyset(N/SQ+1, -1);
ll a[N];
void build(ll buc_num) {
    for (int i = buc_num * SQ; i < min(1ll * n, (buc_num + 1) * SQ) ; i++ ) {
        a[i] = max(a[i], lazyset[buc_num]);
        buc[buc_num][i%SQ] = a[i];
    }
    lazyset[buc_num] = -1;
}
void update(ll idx, ll x) {
    build(idx/SQ);
    a[idx] = x;
    build(idx/SQ);
}
void update(ll l, ll r, ll x) {
    build(l/SQ);
    build(r/SQ);
    for (int i = l; i <= r ;) {
        if (!(i%SQ) && i + SQ - 1 <= r ) {
            lazyset[i/SQ] = max(x, lazyset[i/SQ]);
            i += SQ;
        } else {
            a[i] = max(a[i], x);
            i++;
        }
    }
}
vector<ll> query(ll l, ll r) {
    build(l/SQ);
    build(r/SQ);
    vector<ll> ans;
    for (int i = l; i <= r  ; ) {
        if (!(i%SQ) && i + SQ - 1 <= r ) {
            for (int j = 0; j < buc[i/SQ].size(); j++ )
                ans.push_back(buc[i/SQ][j]);
            i += SQ;
        } else {
            ans.push_back(a[i]);
            i++;
        }
    }
    return ans;
}
void accepted() {
    cin >> n;
    for (int i = 0; i < n ; i++ )
        cin >> a[i], buc[i/SQ].push_back(a[i]);
    ll q;
    cin >> q ;
    while (q--) {
        ll op;
        cin >> op;
        if (op == 1) {
            ll idx, x;
            cin >> idx >> x;
            idx--;
            update(idx, x);
        } else {
            ll x;
            cin >> x ;
            update(0, n-1, x);
        }
    }
    for (int i = 0 ; i < n ; i+=SQ)
        build(i/SQ);
    cout << '\n';
    auto ans = query(0, n-1);
    for (const auto&i : ans)
        cout << i << ' ' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}