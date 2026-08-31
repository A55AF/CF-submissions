#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 3e18
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

const int N = 1e4 + 7;
int n;
string s;
ll dp[N][N];

const int mod = 1e9 + 7;
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }
ll sub(ll x, ll y) { return ((x % mod) - (y % mod) + mod) % mod; }
ll mult(ll x, ll y) { return ((x % mod) * (y % mod)) % mod; }

ll solve(int l = 0, int r = n-1 , int diff = 0) {
    if (l == r) {
        if (diff + ((s[l] == '1') ? 1 : -1) >= 0) return 1;
        else return 0;
    }

    ll &ret = dp[l][r];
    if (~ret) return ret;

    // Move Left
    ret = 0;
    if (s[l] == '1')
        ret = add(ret, solve(l+1, r, diff+1));
    else if (s[l] == '0' && diff > 0)
        ret = add(ret, solve(l+1, r, diff-1));

    // Move Right
    if (s[r] == '1')
        ret = add(ret, solve(l, r-1, diff+1));
    else if (s[r] == '0' && diff > 0)
        ret = add(ret, solve(l, r-1, diff-1));

    return ret;
}

void Sala7ef_ElRenga() {
    memset(dp, -1, sizeof dp);
    cin >> n;
    cin >> s;

    ll answer = solve();
    if (answer)
        cout << add(answer, 1) << '\n';
    else
        cout << 0 << '\n';
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