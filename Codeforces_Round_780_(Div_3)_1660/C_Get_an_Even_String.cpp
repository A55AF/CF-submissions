#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e9
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 2e5+7;
int dp[N];
int n ;
map<char,vector<int>> mp;
string s;
int solve(int idx = 0) {
    if ( idx == n ) return 0;
    int&ans = dp[idx];
    if (ans != inf ) return ans;

    auto next = upper_bound(all(mp[s[idx]]) , idx);
    ans = min(ans,solve(idx+1) + 1 );
    if ( next != mp[s[idx]].end()) ans = min(ans,solve(*next+1) + *next - idx - 1 );

    return ans ;
}
// oaoaaaoo
void accepted() {
    mp.clear();
    cin >> s ;
    for ( int i = 0 ; i < SZ(s) ; i++ ) dp[i] = inf;
    n = SZ(s);
    for ( int i = 0 ; i < n ; i++ )
        mp[s[i]].push_back(i);
    cout << solve() ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}