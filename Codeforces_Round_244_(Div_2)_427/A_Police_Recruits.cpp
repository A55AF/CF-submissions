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
    vector<int> v(n);
    for (int i = 0 ; i < n ; i++) cin >> v[i];
    int ans = 0;
    for (int i = 0, police = 0; i < n ; i++) {
        if (v[i] >= 0) police += v[i];
        else if (!police) ans++;
        else police--;
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
