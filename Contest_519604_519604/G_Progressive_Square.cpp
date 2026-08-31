
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


void accepted() {
    ll n, c, d; // d for horizontal , c for vertical
    cin >> n >> c >> d;
    vector<ll> v1, v2;
    vector<vector<ll> > v(n, vector<ll>(n));
    for (int i = 0; i < n * n; i++) {
        int x;
        cin >> x;
        v1.pb(x);
    }
    sort(all(v1));
    v[0][0] = v1[0];
    v2.pb(v[0][0]);
    for (int i = 1; i < n; i++) {
        v[i][0] = v[i - 1][0] + c;
        v2.pb(v[i][0]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            v[i][j] = v[i][j - 1] + d;
            v2.pb(v[i][j]);
        }
    }
    sort(all(v2));
    // cout << "V1 == ";
    // for (auto it: v1) cout << it << " ";
    // cout << "\nV2 == ";
    // for (auto it: v2) cout << it << " ";
    if (v1 == v2) cout << "YES";
    else cout << "NO";
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
