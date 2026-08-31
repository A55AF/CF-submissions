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
struct Node {
    vector<int> arr;
    int gcd = 0;
};
struct SegmentTree {
#define tm (tl + tr >> 1)
#define left (v << 1)
#define right (v << 1 | 1)
    Node skip;
    vector<Node> tree;
    int n;

    SegmentTree(int sz, vector<int>&a ) {
        n = sz;
        tree.resize(n << 2);
        build(1, 0, n-1, a);
    }

    void build(int v, int tl, int tr, vector<int>&a) {
        if ( tl == tr ) {
            tree[v].gcd = a[tl];
            tree[v].arr.push_back(a[tl]);
            return;
        }
        build(left, tl, tm , a);
        build(right, tm + 1, tr, a);
        tree[v] = merge(tree[left], tree[right]);
    }

    Node merge(Node a, Node b) {
        Node ans;
        std::merge(all(a.arr), all(b.arr), std::back_inserter(ans.arr));
        ans.gcd = merge(a.gcd, b.gcd);
        return ans;
    }

    int merge(int a, int b) {
        return __gcd(a, b);
    }

    int gcd(int v, int tl, int tr, int l, int r ) {
        if ( tl > r || tr < l ) return 0;
        if ( tl >= l && tr <= r ) return tree[v].gcd;

        int one = gcd(left, tl, tm, l, r);
        int two = gcd(right, tm + 1, tr, l, r);
        return merge(one, two);
    }

    int query(int v, int tl, int tr, int l, int r, int gcd) {
        if ( tl > r || tr < l ) return 0;
        if ( tl >= l && tr <= r ) {
            auto st = lower_bound(all(tree[v].arr), gcd);
            auto en = upper_bound(all(tree[v].arr), gcd);
            int ans = (tr - tl + 1) - int(en - st);
            return ans;
        }

        int one = query(left, tl, tm, l, r, gcd);
        int two = query(right, tm + 1, tr, l, r, gcd);
        return one + two;
    }

    int query(int l, int r) {
        int g = gcd(1, 0, n-1, l, r);
        return query(1, 0, n-1, l, r, g);
    }
#undef tm
#undef left
#undef right
};
void accepted() {
    int n;
    cin >> n;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ )
        cin >> v[i];
    SegmentTree st(n, v);
    int q;
    cin >> q;
    while ( q-- ) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << st.query(l, r) << '\n' ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}