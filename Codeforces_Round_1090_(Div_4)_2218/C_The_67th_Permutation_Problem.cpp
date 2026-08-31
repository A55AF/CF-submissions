#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
#define infl (long long)1e18
using namespace std;
// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n;
    cin >> n;
    int ans[n][3]{};
    set<int> nums;
    for(int i = 1 ; i <= 3 * n ; i++) {
        nums.insert(i);
    }
    for(int i = 0, cur = n + 1 ; i < n; i++, cur += 2) {
        ans[i][1] = cur;
        nums.erase(cur);
    }
    for(int i = n-1 ; i >= 0 ; i--) {
        ans[i][0] = *nums.begin();
        ans[i][2] = *nums.rbegin();
        nums.erase(ans[i][0]);
        nums.erase(ans[i][2]);
    }
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < 3; j++) {
            cout << ans[i][j] << ' ';
        }
    }
    cout << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
