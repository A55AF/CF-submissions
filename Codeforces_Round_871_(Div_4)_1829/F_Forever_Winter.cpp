#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
#define inf (int)1e8
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n , m;
    cin >> n >> m ;
    vector<int> gr[n+1];
    for ( int i = 0 ; i < m ; i++ ) {
        int x , y;
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    int leaves = 0;
    set<int> parents;
    for ( int i = 1 ; i <= n ; i++ ) {  
        if ( SZ(gr[i]) == 1 ) leaves++, parents.insert(gr[i].back());
    }
    leaves = leaves / SZ(parents);
    cout << SZ(parents) << ' ' << leaves << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}