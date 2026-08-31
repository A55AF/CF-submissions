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
#define ordered_set tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\


void accepted() {
    int n, m;
    cin >> n >> m;
    ordered_set os;
    vector<int> idx(n + 1);
    int low = -1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        os.insert({i + 1, x});
        if (idx[x] == 0) idx[x] = i + 1;
    }
    while (m--) {
        int x;
        cin >> x;
        cout << os.order_of_key({idx[x], x}) + 1 << "\n";
        if (!os.order_of_key({idx[x], x})) continue;
        os.erase({idx[x], x});
        idx[x] = low;
        os.insert({idx[x], x});
        low--;
    }
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
