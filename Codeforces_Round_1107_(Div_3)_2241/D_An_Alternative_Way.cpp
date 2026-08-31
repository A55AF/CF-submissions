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
    vector<ll> a(n), b(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++) {
        cin >> b[i];
    }
    for(int i = n-1; i >= 1; i--) {
        if(a[i] > b[i]) a[i-1] += a[i] - b[i];
        a[i] = b[i];
    }
    if(a[0] > b[0]) cout << "NO\n";
    else cout << "YES\n";
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
