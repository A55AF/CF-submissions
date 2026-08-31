#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

// Assaf
//  /?\
// (?`_�)
// <,???? - - - -  accepted
// /?\
??? START FROM HERE ???
void accepted() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, last = s[0], cnt = 0;
    for (int i = 1; i < n ; i++) {
        if (last == s[i]) cnt++;
        else ans += cnt, cnt = 0;
        last = s[i];
    }
    ans += cnt;
    cout << ans ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}