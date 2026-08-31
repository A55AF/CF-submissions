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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0 ; i < n ; i++ ) cin >> v[i];
    int l = 0, r = n-1, x = 0;
    int ans1 = 0, ans2 = 0;
    while (l <= r) {
        int val ;
        if (v[l] > v[r]) val = v[l], l++;
        else val = v[r], r--;
        if (x) ans2 += val;
        else ans1 += val;
        x ^= 1;
    }
    cout << ans1 << ' ' << ans2 << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
