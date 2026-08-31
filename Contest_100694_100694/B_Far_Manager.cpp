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
↓↓↓ START FROM HERE ↓↓↓

void accepted() {
    int p, n, x;
    cin >> p >> n >> x;
    int tcol = (n / p) + 1, row = (x % p) + 1, col = (x / p) + 1 , lrow = (n%p)+1;
    cout << min({abs(row-1)+abs(col-1),abs(col-tcol)+abs(row-lrow) + tcol , col + 1 + (p-row)});
}

int main() {
    ASSAF;
    int exe = 1;
//    cin >> exe;
    while (exe--) {
        accepted();
//        cout << "\n" ;
    }
    return 0;
}