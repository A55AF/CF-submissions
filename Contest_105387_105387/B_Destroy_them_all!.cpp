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
ll n, m;
map<pair<ll,ll>, ll> vis;
map<ll, vector<ll>> R, C;
bool in_border(ll x, ll y) {
    return x > 0 && x <= n && y > 0 && y <= m;
}
void accepted() {
    ll k;
    cin >> n >> m >> k;
    for(int i = 0 ; i < k ; i++ ) {
        ll x, y;
        cin >> x >> y;
        R[x].push_back(y);
        C[y].push_back(x);
        vis[{x, y}] = 1;
    }
    
    ll ans = 0, ansx = 0, ansy = 0;
    for(auto&[row, columns] : R) {
        sort(all(columns));
        for(int j = 0 ; j < (int)columns.size() ; j++ ) {
            int c = columns[j];
            if(in_border(row, c-1) && !vis[{row, c-1}]) {
                if(ans < j) {
                    ans = j;
                    ansx = row;
                    ansy = c - 1;
                }
                if(ans < (int)columns.size() - j) {
                    ans = (int)columns.size() - j;
                    ansx = row;
                    ansy = c - 1;
                }
            } 
            if(in_border(row, c+1) && !vis[{row, c+1}]) {
                if(ans < j + 1) {
                    ans = j + 1;
                    ansx = row;
                    ansy = c + 1;
                }
                if ( ans < (int)columns.size() - j - 1) {
                    ans = (int)columns.size() - j - 1;
                    ansx = row;
                    ansy = c + 1;
                }
            }
        }
    }
    
    for (auto&[col, rows] : C) {
        sort(all(rows));
        for (int j = 0 ; j < (int)rows.size() ; j++ ) {
            int r = rows[j];
            if (in_border(r-1, col) && !vis[{r-1, col}]) {
                if (ans < j) {
                    ans = j;
                    ansx = r - 1;
                    ansy = col;
                }
                if (ans < (int)rows.size() - j) {
                    ans = (int)rows.size() - j;
                    ansx = r - 1;
                    ansy = col;
                }
            }
            if (in_border(r+1, col) && !vis[{r+1, col}]) {
                if (ans < j + 1) {
                    ans = j + 1;
                    ansx = r + 1;
                    ansy = col;
                }
                if (ans < (int)rows.size() - j - 1) {
                    ans = (int)rows.size() - j - 1;
                    ansx = r + 1;
                    ansy = col;
                }                
            }
        }
    }
    
    cout << ans << '\n' ;
    cout << ansx << ' ' << ansy ;
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
