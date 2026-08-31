#include<bits/stdc++.h>
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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for (int j = 0 ; j < m ; j++) {
        cin >> b[j], b[j]--;
    }

    vector<set<int>> sets(m+1);
    for (int i = 0, j = 0; i < n ; i++) {
        sets[j].insert(a[i]);
        if (j < m && i == b[j]) {
            j++;
        }
    }

    int ans = 0;
    for (int i = 0 ; i <= m ; i++) {
        ans += (int)sets[i].size();
    }

    const int total = ans;
    for (int i = 0; i < m ; i++) {
        int cur = total - sets[i].size() - sets[i+1].size();
        set<int> new_set;
        for (const auto&s : sets[i]) new_set.insert(s);
        for (const auto&s : sets[i+1]) new_set.insert(s);
        cur += (int)new_set.size();
        ans = min(cur, ans);
    }
    cout << ans ;
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}