#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 1e3+7;
int n , m ;
vector<string> v(N);
int dp[N][5];
string s = "narek";
int solve(int idx=0 , int j = 0) {
    if ( idx == n ) return 0;
    int &ans=dp[idx][j];
    if ( ~ans) return ans;
    int take = 0;
    int crnt = j;
    for( int i = 0 ; i < v[idx].size() ; i++ ) {
        if(v[idx][i] == s[crnt] ) {
            if (crnt<5) crnt++ , take -= 1;
            if (crnt==5) crnt = 0 , take += 10;
        }else {
            for(int x = 0 ; x < 5 ; x++ ) {
                if ( v[idx][i] == s[x] ) {
                    take -= 1;
                    break;
                }
            }
        }
    }
    take += solve(idx+1,crnt);
    int leave = solve(idx+1,j);

    return ans = max(take, leave);
}
void accepted() {
    memset(dp,-1,sizeof dp) ;
    cin >> n >> m ;
    for(int i = 0 ; i < n ; i++ ) cin>>v[i];
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