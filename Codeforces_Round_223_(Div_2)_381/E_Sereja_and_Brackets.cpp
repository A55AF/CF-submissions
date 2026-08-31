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
    int val = 0, open = 0, close = 0;
};
struct SegmentTree {
    Node skip;
    int n;
    vector<Node> tree;

    SegmentTree(int n, string& a) {
        this->n = n;
        tree.resize(4*n);
        build(1, 0, n-1, a);
    }

    void build(int v, int tl, int tr, string& a) {
        if ( tl == tr ) {
            tree[v].open += (a[tl] == '(');
            tree[v].close += (a[tl] == ')');
            return;
        }

        int tm = tl + tr >> 1;
        build(v*2, tl, tm, a);
        build(v*2+1, tm + 1, tr, a);

        tree[v] = merge(tree[v*2],tree[v*2+1]);
    }

    Node merge(Node a, Node b) {
        Node ans;
        ans.val = a.val + b.val;
        int valid = min(a.open, b.close);
        ans.val += valid;
        a.open -= valid, b.close -= valid;
        ans.open = a.open + b.open;
        ans.close = a.close + b.close;
        return ans;
    }

    Node query(int v, int tl, int tr, int l, int r) {
        if ( tl > r || tr < l ) return skip;
        if ( tl >= l && tr <= r ) return tree[v];

        int tm = tl + tr >> 1;
        Node one = query(v*2, tl, tm, l, r);
        Node two = query(v*2+1, tm + 1, tr, l, r);
        return merge(one, two);
    }

    int query(int l, int r) {
        return query(1, 0, n-1, l, r).val * 2;
    }
};
void accepted() {
    string s;
    cin >> s;
    int n = s.size();
    SegmentTree st(n, s);

    int q;
    cin >> q ;
    while ( q-- ) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << st.query(l, r) << '\n'  ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}