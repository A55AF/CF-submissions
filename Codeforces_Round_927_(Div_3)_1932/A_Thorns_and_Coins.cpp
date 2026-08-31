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
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i + 1] == '@')
            c++;
        else if (s[i + 1] == '*') {
            if (i + 1 != n - 1) {
                if (s[i + 2] == '*')
                    break;
            }
        }
    }
    cout << c;
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