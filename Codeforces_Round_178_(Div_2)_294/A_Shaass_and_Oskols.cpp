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
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ;i++)
        cin >> arr[i];
    int m;
    cin >> m;
    while (m--) {
        int wire, y;
        cin >> wire >> y;
        wire--;
        if (wire) arr[wire-1] += y - 1;
        if (wire + 1 < n) arr[wire+1] += arr[wire] - y;

        arr[wire] = 0;
    }
    for (int i = 0; i < n ; i++) {
        cout << arr[i] << '\n';
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}