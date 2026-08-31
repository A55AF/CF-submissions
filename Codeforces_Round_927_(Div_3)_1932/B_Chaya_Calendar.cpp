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
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.pb(x);
    }
    ll years = 1LL * v[0];
    for (int i = 1; i < n; i++) {
        if (years == v[i])
            years *= 2;
        else
            years += v[i] - (years % v[i]);
    }
    cout << years;
}

// 1
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