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
    vector<vector<int>> table;
    vector<int> lg;
    int n, pw;

    SparseTable(vector<int>&v) {
        n = v.size();

        lg.assign(n + 1, 0);
        for ( int i = 2 ; i <= n ; i++ )
            lg[i] = lg[i >> 1] + 1;

        pw = lg[n] + 1;
        table.assign(pw, vector<int>(n));
        for ( int i = 0 ; i < n ; i++ )
            table[0][i] = v[i];

        for ( int j = 1; j < pw ; j++ )
            for ( int i = 0 ; i + (1 << j) - 1 < n ; i++ )
                table[j][i] = merge(table[j-1][i], table[j-1][i + (1 << (j-1))]);
    }

    int merge(int a, int b) {
        return (a & b);
    }

    int query(int l, int r) {
        int lg_sz = lg[r - l + 1];
        return merge(table[lg_sz][l], table[lg_sz][r - (1 << lg_sz) + 1]);
    }
};
void accepted() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for ( int i = 1 ; i <= n ; i++ )
        cin >> v[i] ;

    SparseTable sp(v);

    int q;
    cin >> q;
    while ( q-- ) {
        int l, k;
        cin >> l >> k;
        int st = l, en = n;
        int r = -1;
        while ( st <= en ) {
            int mid = (st + en) / 2 ;
            int val = sp.query(l, mid);

            if ( val >= k ) {
                r = max(r, mid);
                st = mid + 1;
            } else {
                en = mid - 1;
            }
        }

        cout << r << ' ';
    }
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
