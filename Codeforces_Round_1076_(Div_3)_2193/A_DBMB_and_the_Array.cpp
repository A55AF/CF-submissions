#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> v(n);
    int sum = 0;
    for ( int i = 0 ; i < n ; i++ )
        cin >> v[i], sum += v[i];
    double ans = (s - sum) / (x * 1.0)  ;
    if ( ans < 0 || ans != int(ans) ) cout << "NO";
    else cout << "YES";
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}