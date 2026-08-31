#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
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
int n;
const int N = 1e6 + 8;
int arr[N];
ll dp[N][3][2][2];

ll solve(int idx = n - 1, int type = 0, int z1 = 0, int z2 = 0) {
    if (idx == -1) {
        if (z1 != z2) return -inf;
        return 0;
    }
    ll &ans = dp[idx][type][z1][z2];
    if (~ans) return ans;
    ans = -inf;
    if (type == 0) {
        ans = max({ans, solve(idx - 1, 0, z1, z2), solve(idx, 1, z1, z2)});
        if (!z1) ans = max(ans, solve(idx - 1, 0, 1, z2) + arr[idx]);
    }
    if (type == 1) {
        ans = max({ans, solve(idx - 1, 1, z1, z2) + arr[idx], solve(idx, 2, z1, z2)});
        if (!z2) ans = max(ans, solve(idx - 1, 1, z1, 1));
    }
    if (type == 2) {
        ans = max({ans, solve(idx - 1, 2, z1, z2)});
        if (!z1) ans = max({ans, solve(idx - 1, 2, 1, z2) + arr[idx]});
    }
    return ans;
}

void accepted() {
    memset(dp, -1, sizeof dp);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cout << solve(i) << " ";
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
