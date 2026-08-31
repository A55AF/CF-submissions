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

void accepted() {
    int n;
    cin >> n;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x].pb(i);
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r, x, c;
        cin >> l >> r >> x >> c;
        l--, r--;
        int ans = 0;
        for (int i = 0; i <= 257; i++) {
            int number = i ^ x;
            int ones = 0;
            while (number > 0) {
                if (number % 2 == 1)
                    ones++;
                number /= 2;
            }
            if (ones == c) {
                auto it1 = upper_bound(all(mp[i]), r);
                auto it2 = lower_bound(all(mp[i]), l);
                ans += it1 - it2;
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    ASSAF;
    int exe = 1;
//    cin >> exe;
    while (exe--) {
        accepted();
//        cout << "\n";
    }
    return 0;
}
