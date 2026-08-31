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

vector<vector<int> > nums(30);

void accepted() {
    int n, m;
    cin >> n >> m;
    set<int, greater<> > diff;
    for (int i = 0; i < 30; i++) {
        if (!sz(nums[i])) continue;
        int l = 0, r = sz(nums[i]) - 1;
        int st = -1, en = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[i][mid] >= n) {
                st = mid, r = mid - 1;
            } else l = mid + 1;
        }
        l = 0, r = sz(nums[i]) - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[i][mid] <= m) {
                en = mid, l = mid + 1;
            } else r = mid - 1;
        }
        // cout << st << " " << en << "\n";
        if (st != -1 && en != -1) diff.insert(en - st + 1);
    }
    // cout << '\n';
    int res = (m - n + 1) - *diff.begin();
    cout << res;
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    for (int i = 1; i <= 2e5; i++) {
        int x = 0, num = i;
        while (num > 0) {
            if (num % 2) nums[x].pb(i);
            num /= 2;
            x++;
        }
    }
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
