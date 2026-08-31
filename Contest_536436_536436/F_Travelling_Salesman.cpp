#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n , m ;
    cin >> n >> m ;
    vector<vector<pair<int,int>>> v(n+1);
    for( int i = 0 ; i < m ; i++ ){
        int x , y , c ;
        cin >> x >> y >> c ;
        v[x].pb({y,c});
        v[y].pb({x,c});
    }
    vector<bool> vis(n+1);
    priority_queue<pair<int,int>,vector<pair<int,int>> , greater<>> pq;
    int mx = 0;
    pq.push({0,1});
    while(pq.size()){
        int node = pq.top().second;
        int cost = pq.top().first;
        pq.pop();
        if(vis[node]) continue;
        vis[node] = 1;
        mx=max(cost,mx);
        for( const auto&[ch,c]:v[node])
            pq.push({c,ch});
    }
    cout << mx;
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}