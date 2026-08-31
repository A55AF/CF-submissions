#include<bits/stdc++.h>

#define BIG_ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define f(a) a.first
#define s(a) a.second
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

//char name[6] = {65, 83, 83, 65, 70};
//▬▬▬.◙.▬▬▬
//  ═▂▄▄▓▄▄▂
//◢◤ █▀▀████▄▄▄▄◢◤
//█▄▂█ █▄███▀▀▀▀▀▀▀╬
//◥█████◤
//══╩══╩═
// ╬═╬
// ╬═╬
// ╬═╬
// ╬═╬
// ╬═╬     |----------------------------|
// ╬═╬ ☻/  |   ASSAF GOT THE Accepted   |
// ╬═╬/▌   |----------------------------|
// ╬═╬/\

void accepted() {
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    set<int> s1, s2;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }
    int l = 0, r = 0, sim = 0;
    for (auto it: s1) {
        if (it <= k && s2.find(it) == s2.end())
            l++;
        else if (it <= k && s2.find(it) != s2.end())
            sim++;
    }
    for (auto it: s2) {
        if (it <= k && s1.find(it) == s1.end())
            r++;
        else if (it <= k && s1.find(it) != s1.end())
            sim++;
    }
    sim /= 2;
    bool check = true;
    if (l < (k / 2)) {
        if ((k / 2) - l > sim)
            check = false;
        else
            sim -= (k / 2) - l, l = (k / 2);
    }
    if (r < (k / 2)) {
        if ((k / 2) - r > sim)
            check = false;
        else
            sim -= (k / 2) - r, r = (k / 2);
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    BIG_ASSAF;
    int t = 1;
    cin >> t;
    while (t--) {
        accepted();
        cout << "\n";
    }
    return 0;
}