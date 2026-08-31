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
int dist(pair<int,int> p1, pair<int,int> p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}
void accepted() {
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> points(n);
    for (int i = 0 ; i < n ;i++) {
        cin >> points[i].first >> points[i].second;
    }
    for (int i = 0 ; i < n ; i++) {
        int mx = -1;
        for (int j = 0 ; j < n ; j++) {
            if (i == j) continue;
            mx = max(dist(points[i], points[j]), mx);
        }
        if (mx <= k) return void(cout << 1 << '\n');
    }
    cout << -1 << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}