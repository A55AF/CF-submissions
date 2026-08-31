#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(x) x.size()

template < typename T = int , int Base = 0 > struct SegmentTree2D {

    struct Node {
        T val;
        Node(T V = 0) : val(V) {}
        Node operator = (const T rhs) {
            val = rhs;
            return *this;
        }

    };

    int rows, cols;
    vector < vector < Node > > tree;
    Node DEFAULT;
    #define LEFT(idx) (idx << 1)
    #define RIGHT(idx) ((idx << 1) | 1)

    SegmentTree2D(int n, int m, const vector < vector < T > >& nums){
        rows = 1, cols = 1, DEFAULT = 0;
        while(rows < n) rows *= 2;
        while(cols < m) cols *= 2;
        tree = vector < vector < Node > > (2 * rows, vector < Node > (2 * cols, DEFAULT));
        build(nums);
    }

    Node operation(const Node& a, const Node& b){
        return Node(gcd(a.val , b.val));
    }

    void build_y(int vx, int lx, int rx, int vy, int ly, int ry, const vector < vector < T > > &vec) {
        if(Base ? lx >= sz(vec) : lx > sz(vec)) return;
        if(Base ? ly >= sz(vec[0]) : ly > sz(vec[0])) return;
        if (ly == ry) {
            if (lx == rx) tree[vx][vy] = Node(vec[lx - !Base][ly - !Base]);
            else tree[vx][vy] = operation(tree[LEFT(vx)][vy], tree[RIGHT(vx)][vy]);
        } else {
            int my = (ly + ry) / 2;
            build_y(vx, lx, rx, LEFT(vy), ly, my, vec);
            build_y(vx, lx, rx, RIGHT(vy), my + 1, ry, vec);
            tree[vx][vy] = operation(tree[vx][LEFT(vy)], tree[vx][RIGHT(vy)]);
        }
    }

    void build_x(int vx, int lx, int rx, const vector < vector < T > > &vec) {
        if (lx != rx) {
            int mx = (lx + rx) / 2;
            build_x(LEFT(vx), lx, mx, vec);
            build_x(RIGHT(vx), mx + 1, rx, vec);
        }
        build_y(vx, lx, rx, 1, 1, cols, vec);
    }

    void build(const vector < vector < T > > &vec) {
        build_x(1, 1, rows, vec);
    }

    Node query_y(int vx, int vy, int tly, int try_, int ly, int ry) {
        if (ly > ry) return DEFAULT;
        if (ly == tly && try_ == ry) return tree[vx][vy];
        int tmy = (tly + try_) / 2;
        return operation(query_y(vx, LEFT(vy), tly, tmy, ly, min(ry, tmy)), query_y(vx, RIGHT(vy), tmy + 1, try_, max(ly, tmy + 1), ry));
    }

    Node query_x(int vx, int tlx, int trx, int lx, int rx, int ly, int ry) {
        if (lx > rx) return DEFAULT;
        if (lx == tlx && trx == rx) return query_y(vx, 1, 1, cols, ly, ry);
        int tmx = (tlx + trx) / 2;
        return operation(query_x(LEFT(vx), tlx, tmx, lx, min(rx, tmx), ly, ry), query_x(RIGHT(vx), tmx + 1, trx, max(lx, tmx + 1), rx, ly, ry));
    }

    T query(int lx, int rx, int ly, int ry) {
        return query_x(1, 1, rows, lx, rx, ly, ry).val;
    }

    #undef LEFT
    #undef RIGHT
    #undef VAL
};

signed main() {
     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
     int t; cin >> t;
     while (t--) {
         int n, m;      cin >> n >> m;
         vector < vector < ll > > v(n, vector < ll > (m));
         for (auto &i : v) {
             for (auto &j : i) cin >> j;
         }
         SegmentTree2D<ll> seg(n , m, v);
         int q;     cin >> q;
         ll ans = 1;
         while (q--) {
             int x, y, k;  cin >> x >> y >> k;
             ans *= seg.query(x , x + k - 1, y, y + k - 1);
             ans %= 1000000007;
         }

         cout << ans << "\n";
     }
}
