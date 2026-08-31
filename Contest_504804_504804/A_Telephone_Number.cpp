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
    string s;
    cin >> s;
    bool flag = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '8') {
            if (n - i >= 11)
                flag = 1;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
//    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
