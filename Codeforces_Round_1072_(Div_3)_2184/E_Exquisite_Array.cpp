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
const int N = 1e5 + 7;
int ans = 0;
vector<int> par(N), sz(N);
int sum(int x){
    return ((x * (x-1)) >> 1);
}
int root(int x){
    return x == par[x] ? x : root(par[x]);
}
bool connected(int x, int y) {
    return root(x) == root(y);
}
void connect(int x, int y) {
    x = root(x);
    y = root(y);

    ans -= sum(sz[x]);
    ans -= sum(sz[y]);
    if (sz[x] > sz[y])
        swap(x, y);
    par[x] = y;
    sz[y] += sz[x];
    ans += sum(sz[y]);
}
void accepted() {
    ans = 0;
    int n;
    cin >> n;
    for ( int i = 0 ; i <= n ; i++ )
        par[i] = i, sz[i] = 1;
    vector<int> v(n);
    vector<vector<pair<int,int>>> pre(n+7);
    for ( int i = 0 ; i < n ; i++ )
        cin >> v[i] ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        int diff = abs(v[i] - v[i+1]);
        pre[diff].push_back({i, i+1});
    }
    deque<int> output;
    for ( int i = n-1; i >= 1 ; i-- ) {
        for (const auto&[x, y] : pre[i]) {
            if (!connected(x, y)) connect(x, y);
        }
        output.push_front(ans);
    }
    for ( int i = 0 ; i < output.size() ; i++ ) 
        cout << output[i] << ' ' ;
    cout << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
