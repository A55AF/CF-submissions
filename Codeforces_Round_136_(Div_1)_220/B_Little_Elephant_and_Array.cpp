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
struct Query {
    int l, r, i;

    const bool operator<(const Query&oth) const {
        if (l == oth.l) return r < oth.r;
        return l/SQ < oth.l/SQ;
    }
};
vector<int> mo(vector<Query>&queries, vector<int>&a) {
    vector<int> output(queries.size());
    sort(all(queries));

    int frq[N]{};
    int ans = 0;
    auto add = [&](int idx) {
        if (a[idx] > N) return;
        if (frq[a[idx]] == a[idx]) ans--;
        frq[a[idx]]++;
        if (frq[a[idx]] == a[idx]) ans++;
    };

    auto remove = [&](int idx) {
        if (a[idx] > N) return;
        if (frq[a[idx]] == a[idx]) ans--;
        frq[a[idx]]--;
        if (frq[a[idx]] == a[idx]) ans++;
    };

    int L = 0, R = -1;
    for (const auto&[l, r, i] : queries) {
        while (R < r) add(++R);
        while (L > l) add(--L);
        while (R > r) remove(R--);
        while (L < l) remove(L++);
        output[i] = ans;
    }
    return output;
}
void accepted() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) cin >> v[i];
    vector<Query> queries;
    for ( int i = 0 ; i < q ; i++ ) {
        int l, r ;
        cin >> l >> r ;
        l--, r--;
        queries.push_back({l, r, i});
    }
    auto ans = mo(queries, v);
    for (const auto&i : ans) {
        cout << i << '\n' ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}