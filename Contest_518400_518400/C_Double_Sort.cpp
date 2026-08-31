#include<bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define loop(i, z, n ) for ( int i = z ; i < n; i++ )
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
    vector<int> a, b, asort, bsort;
    vector<pair<int, int> > v;
    loop(i, 0, n) {
        int x;
        cin >> x;
        a.pb(x), asort.pb(x);
    }
    loop(i, 0, n) {
        int x;
        cin >> x;
        b.pb(x), bsort.pb(x);
    }
    loop(i, 0, n) {
        loop(j, i+1, n) {
            if ((a[i] > a[j] && (b[i] > b[j] || b[i] == b[j])) || (a[i] == a[j] && b[i] > b[j])) {
                swap(a[i], a[j]), swap(b[j], b[i]);
                v.pb({i, j});
            }
        }
    }
    sort(all(asort)), sort(all(bsort));
    if (a == asort && b == bsort) {
        cout << v.size();
        cout << '\n';
        for (auto [f,s]: v) cout << f + 1 << " " << s + 1 << '\n';
    } else cout << -1 << '\n';
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        // cout << "\n";
    }
    return 0;
}
