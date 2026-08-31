#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) (long long)(v.size())
#define F first
#define S second
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
int n , m ;
const int M = 5e3+7;
vector<vector<int>> qowa, zaka2;
int dp[M][M];
int solve(int idx = 1 , int s = 0 ) {
    if ( idx > m ) return 0;
    int &ans = dp[idx][s];
    if ( ~ans ) return ans;

    int ne = (idx-1)-s;
    int profit = qowa[idx][s+1] + zaka2[idx][ne];
    int strength = solve(idx+1,s+1) + profit;
    profit = qowa[idx][s] + zaka2[idx][ne+1];
    int intelligence = solve(idx+1,s) + profit;
    return ans=max( strength, intelligence);
}
void accepted() {
    memset(dp,-1,sizeof(dp));
    qowa.resize(M,vector<int>(M));
    zaka2.resize(M,vector<int>(M));
    cin >> n >> m ;
    int arr[n]{};
    for( int i = 0; i < n ; i++ ) cin >> arr[i] ;
    for( int i = 0 , idx = 0; i < n ; i++ ) {
        if(idx&&arr[i]>0)zaka2[idx][abs(arr[i])]++;
        if(idx&&arr[i]<0)qowa[idx][abs(arr[i])]++;
        if(!arr[i]) idx++;
    }
    for( int i = 0 ; i < M ; i++ ) {
        for( int j = 1 ; j < M ; j++ ) {
            qowa[i][j] += qowa[i][j-1];
            zaka2[i][j] += zaka2[i][j-1];
        }
    }
    cout << solve() ;
    // for( int i = 0 ; i < m ; i++ ) {
    //     cout << "ZERO " << i+1 << " : ";
    //     for( int j = 0 ; j < 6 ; j++ ) {
    //         cout << "[ " << j << " : " << qowa[i][j] << " ] , ";
    //     }
    //     cout << '\n' ;
    // }
    // cout << '\n';
    // for( int i = 0 ; i < m ; i++ ) {
    //     cout << "ZERO " << i+1 << " : ";
    //     for( int j = 0 ; j < 6 ; j++ ) {
    //         cout << "[ " << j << " : " << zaka2[i][j] << " ] , ";
    //     }
    //     cout << '\n' ;
    // }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--){
        accepted();
        // cout << "\n" ;
    }
    return 0;
}