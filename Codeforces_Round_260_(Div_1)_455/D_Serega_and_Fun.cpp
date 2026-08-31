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
const ll N = 1e5+7, SQ = 340;
deque<ll> buc[N/SQ+1];
ll frq[N/SQ+1][N];
void update(ll l, ll r) {
    ll val = buc[r/SQ][r%SQ];
    buc[r/SQ].erase(buc[r/SQ].begin() + r%SQ);
    frq[r/SQ][val]--;
    buc[l/SQ].insert(buc[l/SQ].begin() + l%SQ, val);
    frq[l/SQ][val]++;
    for (int i = l/SQ ; i < r/SQ ; i++ ) {
        buc[i+1].push_front(buc[i].back());
        frq[i+1][buc[i].back()]++;
        frq[i][buc[i].back()]--;
        buc[i].pop_back();
    }
}
ll query(ll l, ll r, ll k) {
    ll ans = 0;
    for ( int i = l ; i <= r ;) {
        if (!(i%SQ) && i + SQ - 1 <= r) {
            ans += frq[i/SQ][k];
            i += SQ;
        } else {
            ans += (buc[i/SQ][i%SQ] == k);
            i++;
        }
    }
    return ans;
}
void accepted() {
    ll n;
    cin >> n ;
    ll a[n];
    for ( int i = 0 ; i < n ; i++ )
        cin >> a[i], buc[i/SQ].push_back(a[i]), frq[i/SQ][a[i]]++;
    ll q;
    cin >> q ;
    ll last = 0;
    while (q--) {
        ll op, l, r;
        cin >> op >> l >> r ;
        l = (l+last-1)%n;
        r = (r+last-1)%n;
        if (r < l) swap(l, r);

        if (op == 1) {
            update(l, r);
        } else {
            ll k;
            cin >> k;
            k = (k+last-1)%n+1;
            cout << (last = query(l, r, k)) << '\n' ;
        }
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}