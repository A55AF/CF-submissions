#include<bits/stdc++.h>
#include <iterator>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
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
    vector<int> v(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i];
    }
    int ans = -1;
    for (int i = 0 ; i < n ; i++) {
        int cur = 1;
        for (int j = i + 1; j < n ; j++) {
            if (v[j] <= v[j-1]) cur++;
            else break;
        }
        for (int j = i - 1; j >= 0; j--) {
            if (v[j] <= v[j+1]) cur++;
            else break;
        }
        ans = max(ans, cur);
    }
    cout << ans << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}