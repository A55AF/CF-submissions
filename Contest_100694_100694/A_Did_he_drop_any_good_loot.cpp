#include<bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define get(i,t) get<i>(t)
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int inf = 1e9;
const int N = 1e4+7 , M = 2000 , D = 3 , shift = 200;
vector<tuple<int,int,int>> v;
int n , m ;
int dp[N][M][D];
int solve(int idx = 0 , int cur_w = m , int d = 0){
    //Base Case
    if( idx == n ){
        if ( cur_w < shift ) return -inf ;
        return 0;
    }
    if( cur_w < 0 ) return -inf;
    if( ~dp[idx][cur_w][d]) return dp[idx][cur_w][d] ;

    //Transition
    int take_activate = -inf , take, leave = solve(idx+1,cur_w,d);
    if ( d < 2 )
        take_activate = get(0,v[idx]) + solve(idx+1,cur_w - get(1,v[idx]) + get(2,v[idx]),d+1);
    take = get(0,v[idx]) + solve(idx+1,cur_w - get(1,v[idx]),d);
    return dp[idx][cur_w][d] = max({take, take_activate, leave});
}
void accepted() {
    memset(dp,-1,sizeof dp);
    cin >> n >> m ;
    v.resize(n);
    m += shift;
    for(int i = 0 ; i < n ; i++ ){
        cin >> get(0,v[i]) >> get(1,v[i]) >> get(2,v[i]) ;
    }
    cout << solve() ;
}

int main() {
    ASSAF;
    int exe = 1;
//    cin >> exe;
    while (exe--) {
        accepted();
//        cout << "\n" ;
    }
    return 0;
}