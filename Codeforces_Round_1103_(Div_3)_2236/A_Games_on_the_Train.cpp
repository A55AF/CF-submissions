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
    int arr[n], mx = -1;
    for(int i = 0 ; i < n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    mx++;
    int k = -1;
    for(int i = 0 ; i < n ;i++) {
        k = max(mx - arr[i], k);
    }
    cout << k << '\n';
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
