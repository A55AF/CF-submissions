#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
#define int ll
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 1e6+7;
vector<int> spf(N);
vector<int> d(N);
void SPF() {
    for ( int i = 0 ; i < N ; i++ )
        spf[i] = i;

    for ( int i = 2; i * i < N ; i++ ) {
        if ( spf[i] != i ) continue;
        for ( int j = i * i ; j < N ; j += i )
            spf[j] = min(spf[j], i);
    }
}
int D(int n) {
    int ans = 1, cur = 0, last = -1;
    while ( n > 1 ) {
        cur++;
        last = spf[n];
        n /= spf[n];
        if ( last != spf[n] )
            ans *= cur + 1, cur = 0;
    }
    return ans;
}
struct Node {
    int val = 0;
} skip;
struct SegmentTree {
#define tm ((tl + tr) >> 1)
#define left (node << 1)
#define right (node << 1 | 1)
    vector<Node> tree;
    ll n;

    SegmentTree(int sz, vector<int>&a) {
        n = sz;
        tree.resize(n << 2);
        build(1, 0, n-1, a);
    }

    void build(int node, int tl, int tr, vector<int>&a) {
        if ( tl == tr ) {
            tree[node].val = a[tl];
            return;
        }
        build(left, tl, tm , a);
        build(right, tm + 1, tr, a);
        tree[node] = merge(tree[left], tree[right]);
    }

    Node merge(Node a, Node b) {
        Node ans;
        ans.val = a.val + b.val;
        return ans;
    }

    Node query(int node, int tl, int tr, int l, int r) {
        if ( tl > r || tr < l ) return skip;
        if ( tl >= l && tr <= r ) return tree[node];

        Node one = query(left, tl, tm, l, r);
        Node two = query(right, tm + 1, tr, l, r);
        return merge(one, two);
    }

    int query(int l, int r) {
        return query(1, 0, n-1, l, r).val;
    }

    void update(int node, int idx, int value, int tl, int tr) {
        if ( idx < tl || idx > tr ) return;
        if ( tl == tr ) {
            tree[node].val = value;
            return;
        }
        update(left, idx, value, tl, tm);
        update(right, idx, value, tm + 1, tr);
        tree[node] = merge(tree[left], tree[right]);
    }

    void update(int idx, int value) {
        update(1, idx, value, 0, n-1);
    }

#undef tm
#undef left
#undef right
};
void accepted() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    set<int> s;
    vector<int> updates(n);
    for ( int i = 0 ; i < n ; i++ )
        cin >> v[i] , s.insert(i);
    SegmentTree st(n, v);
    while ( q-- ) {
        int op, l, r;
        cin >> op >> l >> r;
        l--, r--;
        if ( op == 1 ) {
            auto start = s.lower_bound(l);
            int idx = (start == s.end()? r + 1 : *start);
            for ( auto it = start; it != s.end() && *it <= r ; ) {
                if ( updates[idx] >= 10 ) {
                    s.erase(it);
                } else {
                    updates[idx]++;
                    v[idx] = D(v[idx]);
                    st.update(idx, v[idx]);
                }
                it = s.lower_bound(idx + 1);
                if ( it == s.end() ) break;
                idx = *it;
            }
        } else {
            cout << st.query(l, r) << '\n';
        }
    }
}

signed main() {
    ASSAF;
    SPF();
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
