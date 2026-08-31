#include<bits/stdc++.h>
#define infl (long long)1e18
#define int long long
typedef long long ll;
using namespace std;

const int N = 1e5+8;
const ll mod = 1e9 + 7;
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }
ll sub(ll x, ll y) { return ((x % mod) - (y % mod) + mod) % mod; }
ll mult(ll x, ll y) { return ((x % mod) * (y % mod)) % mod; }
ll fpow(ll b, ll pw)
{
    ll ans = 1;
    while (pw > 0)
    {
        if (pw % 2 == 1)
            ans = 1LL * mult(ans, b);
        b = mult(b, b);
        pw = pw / 2;
    }
    return ans;
}
vector<int> gr[N],vis(N), clr(N);
int comp = 0;
bool valid = true;
void dfs(int node = 1, int color = 0) {
    vis[node] = 1;
    clr[node] = color;
    for (const auto&ch : gr[node]) {
        if (!vis[ch]) dfs(ch, color ^ 1);
        else if (clr[node] == clr[ch]) valid = false;
    }
}
signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0 ; i < m ; i++ ) {
        int x, y;
        cin >> x >> y ;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    for (int i = 1 ; i <= n ; i++ ) {
        if (!vis[i]) {
            comp++;
            dfs(i);
        }
    }
    if (!valid) {
        cout << -1 ;
        return 0;
    }
    cout << fpow(2, comp);
    return 0;
}