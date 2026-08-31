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
    vector<int> v[4];
    for(int i = 0 ; i < n; i++) {
        int x;
        cin >> x;
        v[x].push_back(i+1);
    }
    int sz = min({v[1].size(), v[2].size(), v[3].size()});
    cout << sz <<'\n';
    for(int i = 0 ; i < sz; i++){
        for(int j = 1; j <= 3; j++) {
            cout << v[j].back() << ' ' ;
            v[j].pop_back();
        }
        cout << '\n';
    }
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}
