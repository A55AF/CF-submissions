#include<bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

void accepted() {
    int n;
    set<int> s1;
    multiset<int> s2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i == 0)
            s1.insert(x);
        else {
            if (s1.find(x) == s1.end())
                s1.insert(x);
            else
                s2.insert(x);
        }
    }
    for (auto it: s1)
        cout << it << " ";
    if (!(s2.empty())) {
        for (auto it: s2)
            cout << it << " ";
    }
}

int main() {
    ASSAF;
    int t = 1;
    cin >> t;
    while (t--) {
        accepted();
        cout << "\n";
    }
    return 0;
}