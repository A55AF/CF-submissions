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
    int odd = 0, even = 0;
    while (n--) {
        int x;
        cin >> x;
        x % 2 ? odd++ : even++;
    }
    ll res = odd * even * 1LL;
    if (res == 0) {
        cout << "NO";
        return;
    }
    bool check = true;
    while (res > 0) {
        if (res % 10 != 4 && res % 10 != 7) {
            check = false;
            break;
        }
        res /= 10;
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
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
