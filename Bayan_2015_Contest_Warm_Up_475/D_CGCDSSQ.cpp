#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
#define int ll
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
struct SparseTable {
    vector<vector<int>> table;
    vector<int> lg;

    SparseTable(int n, vector<int>&v) {
        table.resize(n+7, vector<int>(25));
        lg.resize(n+7);

        lg[1] = 0;
        for ( int i = 2 ; i <= n ; i++ )
            lg[i] = lg[i >> 1] + 1;

        for ( int i = 0 ; i < n ; i++ )
            table[i][0] = v[i];

        for ( int j = 1; j <= lg[n]; j++ )
            for ( int i = 0 ; i + (1 << j ) - 1 < n ; i++ )
                table[i][j] = merge(table[i][j-1], table[i + (1 << (j-1))][j-1]);
    }

    int merge(int a, int b) {
        return __gcd(a, b);
    }

    int query(int l, int r) {
        int lg_sz = lg[r - l + 1];
        return merge(table[l][lg_sz], table[r - (1 << lg_sz) + 1][lg_sz]);
    }
};

void accepted() {
    int n;
    cin >> n ;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ )
        cin >> v[i] ;

    SparseTable sp(n, v);

    map<int,int> ans;
    for ( int l = 0 ; l < n ; l++ ) {
        int cur_gcd = v[l], start = l;
        while ( start < n ) {
            int st = start, en = n - 1, r = -1;
            while ( st <= en ) {
                int mid = (st + en)>> 1 ;
                int val = sp.query(l, mid);
                if ( val == cur_gcd ) {
                    r = mid;
                    st = mid + 1;
                } else {
                    en = mid - 1;
                }
            }
            ans[cur_gcd] += r - start + 1;
            start = r + 1;
            if ( start < n )
                cur_gcd = sp.query(l, start);
        }
    }

    int q;
    cin >> q;
    while ( q-- ) {
        int x;
        cin >> x ;
        cout << ans[x] << '\n' ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}