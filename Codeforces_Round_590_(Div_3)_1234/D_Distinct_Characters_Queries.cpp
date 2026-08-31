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
struct Node {
    int val = 0;
};
struct SegmentTree {
    int n;
    Node skip;
    vector<Node> tree;

    SegmentTree(int n, string&a) {
        this->n = n;
        tree.resize(4 * n);
        build(1, 0, n - 1, a);
    }

    void build(int v, int tl, int tr, string& a) {
        if ( tl == tr ) {
            int idx = a[tl] - 'a';
            tree[v].val = (1 << idx);
            return;
        }
        int tm = tl + tr >> 1;
        build(v*2, tl, tm, a);
        build(v*2 + 1, tm + 1, tr, a);
        tree[v] = merge(tree[v*2], tree[v*2+1]);
    }

    Node merge(Node&a, Node&b) {
        Node ans;
        ans.val = a.val | b.val;
        return ans;
    }

    void update(int v, int node, int tl, int tr, char value) {
        if ( tl == tr ) {
            int idx = value - 'a';
            tree[v].val = (1 << idx);
            return;
        }
        int tm = tl + tr >> 1;
        if ( node <= tm )
            update(v*2, node, tl, tm, value);
        else
            update(v*2 + 1, node, tm + 1, tr, value);
        tree[v] = merge(tree[v*2], tree[v*2+1]);
    }

    void update(int node, char value) {
        return update(1, node, 0, n - 1, value);
    }

    Node query(int v, int tl, int tr, int l, int r) {
        if ( tr < l || tl > r ) return skip;
        if ( tl >= l && tr <= r ) return tree[v];

        int tm = tl + tr >> 1;
        Node one = query(v*2, tl , tm, l, r);
        Node two = query(v*2+1, tm + 1, tr, l , r);
        return merge(one, two);
    }

    int query(int l, int r) {
        int result = query(1, 0, n-1, l, r).val;
        int ans = 0;
        while ( result > 0 ) {
            ans += (result & 1);
            result >>= 1;
        }
        return ans;
    }
};
void accepted() {
    string s;
    cin >> s;
    int n = s.size();

    SegmentTree st(n, s);

    int q;
    cin >> q;
    while ( q-- ) {
        int op;
        cin >> op;
        if ( op == 1 ) {
            int node; char c;
            cin >> node >> c;
            node--;
            st.update(node, c);
        } else {
            int l, r;
            cin >> l >> r;
            l--, r--;
            cout << st.query(l, r) << '\n' ;
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