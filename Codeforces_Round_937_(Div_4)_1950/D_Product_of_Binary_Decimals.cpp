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

vector<int> v;

void accepted() {
    int n;
    cin >> n;
    bool check = true;
    int x = n;
    while (x > 0) {
        if (x % 10 > 1)
            check = false;
        x /= 10;
    }
    if (check) {
        cout << "YES";
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        while (n % v[i] == 0) {
            n /= v[i];
        }
    }
    if (n == 1)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ASSAF;
    for (int i = 9; i < 1e5 + 10; i++) {
        bool check = true;
        int x = i;
        while (x > 0) {
            if (x % 10 > 1)
                check = false;
            x /= 10;
        }
        if (check)
            v.pb(i);
    }
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
