#include <bits/stdc++.h>
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

// سلاحف الرنجة
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⢠⣤⣄⠀⣀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⣠⣴⠟⠛⠉⠁⠀⠀⠈⠉⠛⠻⣦⣄⠀⢸⡟⠙⣿⡟⣷⡀
// ⠀⠀⠀⠀⠀⢠⣾⠏⠁⣀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡈⠻⣷⣼⣧⠀⢹⡇⣹⡇
// ⠀⠀⠀⠀⣰⡿⠟⠛⢛⣛⣛⡿⢶⣶⣶⡶⢿⣛⣛⡛⠛⠿⢿⣿⣷⣿⣣⡿⠁
// ⠀⠀⠀⠀⣿⠁⢀⣼⠟⣯⣝⣻⣦⣤⣤⣾⣟⣫⣭⠻⣷⡄⠈⣿⣨⣿⠋⠀⠀
// ⠀⠀⣠⡾⠻⢷⣬⣛⣿⡿⠟⠋⠁⠀⠀⠈⠉⠛⢿⣿⣋⣵⡾⠛⢿⣅⠀⠀⠀
// ⠀⣼⠟⠀⠀⠀⠉⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⠁⠀⠀⠀⠻⣧⠀⠀
// ⠰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠀
// ⠀⢻⣦⠀⠀⠀⠀⠀⢴⣤⣤⣀⣀⠀⠀⣀⣠⣤⡾⢿⡆⠀⠀⠀⠀⣴⡟⠀⠀
// ⠀⠀⠙⢷⣤⣀⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠉⠁⠀⠈⠁⠀⣀⣤⡾⠋⠀⠀⠀
// ⠀⠀⠀⠀⠈⠛⠷⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡶⠟⠋⠁⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⣤⣀⡀⠀⠀⢀⣠⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⠛⠛⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ↓↓↓ START FROM HERE ↓↓↓
const int N = 1e3+7;
int n ;
int pg[N] , p[N] , f[N] , fame[N][300] , enjoy[N][300];
int solve1(int idx = 0 , int time = 0 ) {
    if ( idx == n ) return 0;
    if ( time > 260 ) return -inf;
    int&ans = fame[idx][time];
    if (~ans) return ans;

    int take = -inf;
    if ( time <= 160) take = solve1(idx+1,time+pg[idx]) + f[idx];
    int leave = solve1(idx+1,time);

    return ans = max(take , leave );
}

int solve2(int idx = 0 , int time = 0 ) {
    if ( idx == n ) return 0;
    if ( time > 260) return -inf;
    int&ans = enjoy[idx][time];
    if (~ans) return ans;

    int take = -inf;
    if ( time <= 160 ) take = solve2(idx+1,time+pg[idx]) + p[idx];
    int leave = solve2(idx+1,time);

    return ans = max(take , leave);
}
void Sala7ef_ElRenga() {
    memset(fame , -1 , sizeof fame );
    memset(enjoy , -1 , sizeof enjoy );
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ) cin >> pg[i] ;
    for ( int i = 0 ; i < n ; i++ ) cin >> p[i] ;
    for ( int i = 0 ; i < n ; i++ ) cin >> f[i] ;

    int mx1 = solve1() , mx2 = solve2();
    if (mx1>mx2) cout << "FAME";
    else if ( mx1<mx2) cout << "PLEASURE";
    else cout << "EITHER";

}


signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--){
        Sala7ef_ElRenga();
        // cout << "\n" ;
    }
    return 0;
}