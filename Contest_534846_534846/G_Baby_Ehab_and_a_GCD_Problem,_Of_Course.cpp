#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    freopen("gcd.in", "r", stdin);
    int q; cin >> q;
    ll gcd; bool gcd_init = false;
    bool one = false;
    while(q--){
        ll l, r; cin >> l >> r;
        if (!gcd_init){
            gcd_init = 1;
            gcd = l;
        }

        for (ll i = l;i <= r;i++){
            gcd = __gcd(gcd, i);

            if (gcd == 1){
                one = 1;
                break;
            }
        }

        cout << gcd << '\n';
        
    }
    return 0;
}