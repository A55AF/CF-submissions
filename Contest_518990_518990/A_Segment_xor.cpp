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

vector<vector<int> > v;

void accepted() {
    int n;
    cin >> n;
    map<int, vector<int> > mp;
    map<int, pair<int, int> > mn;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x].pb(i + 1);
        mn[x] = {1,INT_MAX};
    }
    for (auto [num,v]: mp) {
        for (int i = 0; i < v.size() - 1; i++) {
            int diff = v[i + 1] - v[i], mnDiff = mn[num].second - mn[num].first;
            if (diff < mnDiff) mn[num].second = v[i + 1], mn[num].first = v[i];
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        if (mn[x].second == INT_MAX || mn[x].second == 0) cout << "iam sorry AhmedPlusPlus";
        else cout << mn[x].first << " " << mn[x].second;
        if (mn[x].second == 0) mn.erase(x);
        cout << "\n";
    }
}

int main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--) {
        accepted();
        // cout << "\n";
    }
    return 0;
}
