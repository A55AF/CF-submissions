#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e9
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
int n , m , k ;
const int N = 2e5+7;
int sp[N];
int ds[2][N];
vector<int> gr[N];
void bfs(int node, int* arr) {
    for ( int i = 0 ; i <= n ; i++ ) arr[i] = inf;
    queue<int> q;
    q.push(node);
    arr[node] = 0;
    while (SZ(q)) {
        int cur_node=q.front();
        q.pop();
        for (const int&ch:gr[cur_node]) {
            if (arr[ch]==inf) {
                q.push(ch);
                arr[ch] = arr[cur_node] + 1;
            }
        }
    }
}
void accepted() {
    cin >> n >> m >> k ;
    for ( int i = 0 ; i < k ; i++ ) cin >> sp[i];
    sort(sp,sp+k);
    for ( int i = 0 ; i < m ; i++ ) {
        int x ,y ;
        cin >> x >> y ;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    bfs(1,ds[0]);
    bfs(n,ds[1]);
    vector<pair<int,int>>v;
    for (int i = 0 ; i < k ; i++ ) {
        v.push_back({ds[0][sp[i]]-ds[1][sp[i]],sp[i]});
    }
    sort(all(v));
    int ans = 0 , mx = -inf;
    for ( const auto&[f,a]:v) {
        ans=max(ans,mx+ds[1][a]);
        mx=max(mx,ds[0][a]);
    }
    ans++;
    cout << min(ds[0][n],ans) ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--)
        accepted();
}
