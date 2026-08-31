#include<bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓

void accepted() {
    int n;
    cin >> n;
    const int N = 1e6 + 7;
    vector<int> frq(N), v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        frq[v[i]]++;
    }
    sort(all(v));
    vector<vector<int>> dp(N, vector<int>(2, -1));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int last = 0;
        if (dp[v[i]][0] == -1) {
            for (int j = v[i]; j < N; j *= 2) {
                if (j == v[i]) {
                    dp[v[i]][0] = frq[v[i]];
                    dp[v[i]][1] = 0;
                    continue;
                }
                dp[j][0] = frq[j] + min(dp[j / 2][1], dp[j / 2][0]);
                dp[j][1] = dp[j / 2][0];
                last = min(dp[j][0], dp[j][1]);
            }
        }
        ans += last;
    }
    cout << ans;
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