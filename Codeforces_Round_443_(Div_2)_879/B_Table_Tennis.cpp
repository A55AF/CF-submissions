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
    ll n, k;
    cin >> n >> k;
    deque<int> dq;
    int wins[n+1]{};
    int mx = -1;
    for (int i = 0 ; i < n ;i++) {
        int x;
        cin >> x;
        dq.push_back(x);
        mx = max(x, mx);
    }

    if (k >= n) return void(cout << mx) ;

    // take the current one in the row
    int cur = dq.front();
    dq.pop_front();
    while (!dq.empty()) {
        if (cur < dq.front()) {
            dq.push_back(cur);
            cur = dq.front();
        } else {
            dq.push_back(dq.front());
        }
        dq.pop_front();
        wins[cur]++;
        if (wins[cur] == k) return void(cout << cur);
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}