#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> cd(k);
    vector<ll> input(n);
    set<pair<double, ll>> tmp;
    for (int i = 0; i < k; i++) tmp.insert(make_pair(0, i));
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < n; i++) {
        pair<double, ll> temp = *tmp.begin();
        tmp.erase(tmp.begin());
        cd[temp.second].push_back(input[i]);
        cout << temp.second+1 << ' ';

        ll ci = cd[temp.second].size();
        double pi = cd[temp.second][ci - 1];
        if (cd[temp.second].size() > 1) {
            pi += cd[temp.second][ci - 2];
            pi /= 2;
        }
        temp = make_pair(ci * pi, temp.second);
        tmp.insert(temp);
    }
    return 0;
}
