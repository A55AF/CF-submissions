#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define infl (long long)1e18
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

    SparseTable(vector<int>& v) {
        int n = SZ(v);
        table = vector<vector<int>>(n+7, vector<int>(25));
        lg = vector<int>(n+7);

        lg[1] = 0;
        for ( int i = 2 ; i <= n ; i++ )
            lg[i] = lg[i >> 1] + 1;

        for ( int i = 1 ; i < n ; i++ )
            table[i][0] = v[i];

        for ( int j = 1; j < 25 ; j++ )
            for ( int i = 1 ; i + ( 1 << j ) - 1 <= n ; i++ )
                table[i][j] = f(table[i][j-1], table[i + (1 << (j - 1))][j-1]);
    }

    int f(int a, int b) {
        return min(a, b);
    }

    int q(int l, int r) {
        int lg_sz = lg[r - l + 1];
        return f(table[l][lg_sz], table[r - (1 << lg_sz) + 1 ][lg_sz]);
    }
};
void accepted() {
    int n;
    cin >> n ;
    vector<int> v(n+1);
    for ( int i = 1 ; i <= n; i++ )
        cin >> v[i] ;

    SparseTable sp(v);

    map<int,vector<int>> mp;
    for ( int i = n, mx = v[n]; i >= 1 ; i-- ) {
        mx = max(mx, v[i]);
        mp[mx].push_back(i);
    }

    for ( int x = 1, mx = v[x]; x <= n - 2 ; x++ ) {
        mx = max(mx, v[x]);
        if ( mp[mx].empty() ) continue;

        // Binary Search on valid ends for the midle range
        int l = 0, r = SZ(mp[mx]) - 1;
        while ( l <= r ) {
            // the valid end in the vector
            int mid = l + r >> 1 ;

            // the index in the main array
            int y = mp[mx][mid] - 1;

            // skip if the range is not valid or if there is no room for the last range ( y == n )
            if ( y < x + 1 || y == n ) {
                r = mid - 1 ;
                continue;
            }

            // the min in the range
            int val = sp.q(x + 1, y);
            if ( val == mx ) {
                cout << "YES\n";
                cout << x << ' ' << y - x << ' ' << n - y << '\n';
                return;
            }
            if ( val < mx ) {
                l = mid + 1;
            } else if ( val > mx ) {
                r = mid - 1;
            }
        }
    }
    cout << "NO\n";
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}