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
int dx[] = {1,1,1,0,0,-1,-1,-1};
int dy[] = {1,0,-1,1,-1,1,0,-1};
map<pair<int,int>, int> ans;
map<pair<int,int>, bool> vis;
map<int,vector<pair<int,int>>> mp;
set<pair<int,int>> valid;
bool isValid(int tx , int ty ) {
    return tx >= 0 && tx <= inf && ty >= 0 && ty <= inf && !vis[{tx,ty}] && valid.find({tx,ty}) != valid.end() ;
}
void accepted() {
    pair<int,int> init , final ;
    cin >> init.F >> init.S >> final.F >> final.S ;
    int n ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ) {
        int r , x , y;
        cin >> r >> x >> y;
        mp[r].push_back({x,y});
    }
    for ( const auto&[r,p]:mp) {
        for ( const auto&[f,s]:p) {
            for ( int c = f ; c <= s ; c++ ) {
                valid.insert({r,c});
            }
        }
    }
    queue<pair<int,int>> q;
    q.push(init);
    vis[init] = 1;
    ans[init] = 0;
    while (!q.empty()) {
        auto[x,y] = q.front();
        vis[q.front()] = true;
        q.pop();
        for ( int i = 0 ; i < 8 ; i++ ) {
            int tx = x + dx[i] , ty = y + dy[i]  ;
            if ( isValid(tx,ty) ) {
                vis[{tx,ty}] = true;
                q.push({tx,ty});
                if ( ans[{tx,ty}] )
                    ans[{tx,ty}] = min(ans[{tx,ty}],ans[{x,y}] + 1);
                else
                    ans[{tx,ty}] = ans[{x,y}] + 1;
            }
        }
    }
    if ( !ans[final] ) ans[final] = -1;
    cout << ans[final];
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}