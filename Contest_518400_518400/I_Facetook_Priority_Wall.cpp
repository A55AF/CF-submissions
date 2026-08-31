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
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> v(n + 1);
    for (int i = 0; i <= n; i++) {
        getline(cin, v[i]);
    }
    map<string, int> mp;
    for (int i = 1; i <= n; i++) {
        string x;
        int z = 0;
        for (; z < v[i].size(); z++) {
            if (v[i][z] == ' ') break;
            x.pb(v[i][z]);
        }
        string point;
        z++;
        for (; z < v[i].size(); z++) {
            if (v[i][z] == ' ') break;
            point.pb(v[i][z]);
        }
        bool flag = false;
        string y;
        for (int j = v[i].size() - 1; j >= 0; j--) {
            if (v[i][j] == '\'') flag = true;
            else if (flag) {
                if (v[i][j] == ' ') break;
                y.pb(v[i][j]);
            }
        }
        std::reverse(y.begin(), y.end());
        mp[x], mp[y];
        if (point == "posted" && (x == s || y == s)) mp[x] += 15, mp[y] += 15;
        else if (point == "commented" && (x == s || y == s)) mp[x] += 10, mp[y] += 10;
        else if (point == "likes" && (x == s || y == s)) mp[x] += 5, mp[y] += 5;
    }
    map<int, set<string>, greater<>> res;
    for (auto it: mp) {
        res[it.second].insert(it.first);
    }
    for (auto it: res) {
        for (auto it1: it.second) {
            if (it1 == s) continue;
            cout << it1 << "\n";
        }
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