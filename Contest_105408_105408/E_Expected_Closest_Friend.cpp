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

const ll mod = 1e9 + 7;

const int N = 1e5 + 7;
int fact[N];

ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }
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

ll inv(ll x) { return fpow(x, mod - 2); }

void factorial()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
        fact[i] = mult(fact[i - 1], i);
}

ll divis(ll x, ll y) { return mult(x, inv(y)); }

ll nCr(ll n, ll r)
{
    if (n < r)
        return 0;
    return divis(fact[n], mult(fact[r], fact[n - r]));
}


ll n, m, k;
vector<vector<pair<ll, ll>>> graph; // {node, weight}
vector<ll> cost;

void dijkstra() {
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> pq;
    pq.push({0, 0});
    cost[0] = 0;

    while (!pq.empty()) {
        ll node = pq.top().second;
        ll current_cost = pq.top().first;
        pq.pop();

        if (current_cost > cost[node]) continue;

        for (const auto& [child, weight] : graph[node]) {
            if (cost[child] > current_cost + weight) {
                cost[child] = current_cost + weight;
                pq.push({cost[child], child});
            }
        }
    }
}

void Sala7ef_ElRenga() {
    factorial();

    cin >> n >> m >> k;
    graph.resize(n);
    cost.resize(n, inf);
    for (int i = 0; i < m; ++i) {
        ll u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    dijkstra();
    // print(cost);

    vector<ll> distances;
    for (int i = 1; i < n; ++i)
        distances.push_back(cost[i]);
    sort(all(distances));
    vector<ll> counter(distances.size());

    ll prob = 0;
    for (int i = 0; i < distances.size() - (k-1); ++i) {
        counter[i] = mult(nCr((ll)distances.size() - (i+1), k-1), fact[k-1]);
        prob = add(prob, counter[i]);
    }

    ll answer = 0;
    for (int i = 0; i < distances.size() - (k-1); ++i) {
        answer = add(answer, mult(distances[i], divis(counter[i], prob)));
    }
    cout << answer << '\n';
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