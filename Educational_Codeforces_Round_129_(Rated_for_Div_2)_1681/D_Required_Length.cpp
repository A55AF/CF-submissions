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
void accepted() {
    ll n , x;
    cin >> n >> x ;
    map<ll,bool> vis;
    queue<ll> q;
    q.push(x);
    q.push(-1);
    vis[x] = 1;
    int lvl = 0;
    while (SZ(q)) {
        ll num = q.front();
        q.pop();
        if ( num == -1 ) {
            lvl++;
            q.push(-1);
            if ( q.front() == -1 ) break;
            continue;
        }
        vis[num] = 1 ;
        ll i = num , digits = 0;
        while ( i > 0 ) {
            if ( !vis[(i%10)*num] )
                q.push((i%10)*num) , vis[(i%10)*num] = 1;
            i/=10;
            digits++;
        }
        if ( digits == n ) {
            return void ( cout << lvl);
        }
    }
    cout << "-1" ;
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--)
        accepted();
}
