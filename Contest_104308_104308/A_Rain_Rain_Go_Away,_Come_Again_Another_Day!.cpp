#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define loop(i,st,en) for ( int i =st ; i < en ; i++ )
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\


void minPad(deque<int> &dq) {
    int x = dq.front(), y = dq.back();
    if (x < y) dq.pop_front();
    else if (x > y) dq.pop_back();
    else {
        dq.pop_back();
        if (sz(dq))dq.pop_front();
    }
}

void accepted() {
    int n;
    cin >> n;
    deque<int> dq(n);
    loop(i, 0, n) cin >> dq[i];
    int water = 0;
    while (dq.size() > 0) {
        int mnNum = min(dq.front(), dq.back());
        for (int i = 0; i < sz(dq); i++) {
            if (mnNum > dq[i]) {
                water += (mnNum - dq[i]), dq[i] = mnNum;
            }
        }
        minPad(dq);
    }
    cout << water;
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
