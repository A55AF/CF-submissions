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
const int mod = 32768;
vector<int>gr[mod+1];
bool vis[mod+1];
void accepted() {
    int n ;
    cin >> n ;
    queue<int> q;
    for ( int i = 0 ; i < mod ; i++ ) {
        gr[(i+1)%mod].push_back(i);
        gr[(i*2)%mod].push_back(i);
    }
    int ans[mod+1];
    memset(ans,-1,sizeof ans);
    q.push(0);
    ans[0] = 0;
    while (SZ(q)) {
        int node = q.front();
        q.pop();
        for ( const int&ch:gr[node]) {
            if ( ans[ch] == -1 ) {
                q.push(ch);
                ans[ch] = ans[node] + 1;
            }
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        int x ;cin >> x ;
        cout << ans[x] << ' ' ;
    }
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--)
        accepted();
}
