#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define print(x) for (const auto& itr : (x)) {cout << itr << ' ';} cout << '\n';
#define MOD 1'000'000'007
using namespace std;

int n,s, maximum;

void solve(int idx, int mn,int sum, int size, int coins[]){
    if (sum - mn >= s)
        return;
    if (sum >= s)
        maximum = max(maximum, size);
    if (idx == n)
        return;

    solve(idx+1, mn, sum, size, coins);
    mn = min(mn, coins[idx]);
    sum += coins[idx];
    size++;
    solve(idx+1, mn, sum, size, coins);
}

int main() {
    fast; // ACCEPTED SNIPERS
    int t; cin >> t;
    while (t--) {
        cin  >> n >> s; maximum = 0;

        int coins[n];

        for (int i = 0;i < n;i++){
            cin >> coins[i];
        }

        solve(0, 1e9, 0, 0, coins);

        cout << maximum << '\n';
    }
    return 0;
}