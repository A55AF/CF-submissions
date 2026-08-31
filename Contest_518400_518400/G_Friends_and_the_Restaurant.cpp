#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define loop(i,st,en) for ( int i = st ; i < en ; i++ )
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\


void accepted() {
    ll n;
    cin >> n;
    vector<ll> diff(n);
    loop(i, 0, n) cin >> diff[i];
    loop(i, 0, n) {
        ll y;
        cin >> y;
        diff[i] = y - diff[i];
    }
    sort(rall(diff));
    int l = 0, r = n - 1;
    ll ans = 0;
    while (l < r) {
        ll val = diff[l] + diff[r];
        if (val >= 0) ans++, l++, r--;
        else r--;
    }
    cout << ans;
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
