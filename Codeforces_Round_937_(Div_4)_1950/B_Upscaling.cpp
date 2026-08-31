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
    char arr[2 * n][2 * n];
    for (int i = 0; i < 2 * n; i++) {
        int indx1 = 0;
        i % 2 == 0 ? indx1 = i : indx1 = i ^ 1;
        for (int j = 0; j < 2 * n; j++) {
            int indx2 = 0;
            j % 2 == 0 ? indx2 = j : indx2 = j ^ 1;
            if ((indx1 / 2) % 2 == 0) {
                if ((indx2 / 2) % 2 == 0)
                    arr[i][j] = '#';
                else
                    arr[i][j] = '.';
            } else {
                if ((indx2 / 2) % 2 == 0)
                    arr[i][j] = '.';
                else
                    arr[i][j] = '#';
            }
        }
    }
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << arr[i][j];
        }
        if (i != 2 * n - 1)
            cout << "\n";
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
