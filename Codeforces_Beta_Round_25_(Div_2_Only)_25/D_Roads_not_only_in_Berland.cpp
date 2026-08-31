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
const int N = 1e3+7;
vector<int> par(N), sz(N);
int root(int x) {
    return x == par[x] ? x : root(par[x]);
}
bool connected(int x, int y) {
    return root(x) == root(y);
}
void connect(int x, int y) {
    x = root(x);
    y = root(y);
    if ( sz[x] <= sz[y] )
        par[x] = y, sz[y] += sz[x];
    else
        par[y] = x, sz[x] += sz[y];
}

void accepted() {
    int n; cin >> n;
    for (int i = 0 ; i < n ; i++ )
        par[i] = i, sz[i] = 1;
    vector<pair<int,int>> closed, opened;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        int x, y;
        cin >> x >> y;
        if ( !connected(x,y) ) connect(x, y);
        else closed.push_back({x,y});
    }
    for ( int i = 1 ; i <= n ; i++ ) {
        for ( int j = 1 ; j <= n ; j++ ) {
            if ( !connected(i, j) ) connect(i, j), opened.push_back({i, j});
        }
    }
    cout << closed.size() << '\n' ;
    for ( int i = 0 ; i < (int)closed.size() ; i++ ) {
        cout << closed[i].first << ' ' << closed[i].second << ' ' << opened[i].first << ' ' << opened[i].second << '\n' ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}