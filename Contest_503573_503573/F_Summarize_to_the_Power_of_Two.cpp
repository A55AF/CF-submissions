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
    vector<int> ms;
    set<int> power;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.pb(x);
    }
    sort(all(ms));
    ll p = 2;
    while (p <= INT_MAX) {
        power.insert(p);
        p *= 2;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (auto it: power) {
            if (it - ms[i] > 0) {
                int st = 0, en = n - 1;
                while (st <= en) {
                    int mid = (st + en) / 2;
                    if (ms[mid] == it - ms[i]) {
                        if (mid != i) {
//                            cout << it << " " << ms[i] << " " << ms[mid] << "\n" ;
                            found = true;
                            break;
                        } else {
                            if (mid != 0 && mid != n - 1) {
                                if (ms[mid + 1] == it - ms[i])
                                    st = mid + 1;
                                else if (ms[mid - 1] == it - ms[i])
                                    en = mid - 1;
                                else
                                    break;
                            } else if (mid == 0) {
                                if (ms[mid + 1] == it - ms[i])
                                    st = mid + 1;
                                else
                                    break;
                            } else {
                                if (ms[mid - 1] == it - ms[i])
                                    en = mid - 1;
                                else
                                    break;
                            }
                        }
                    } else if (ms[mid] > it - ms[i])
                        en = mid - 1;
                    else if (ms[mid] < it - ms[i])
                        st = mid + 1;
                }
            }
        }
        if (!found)
            ans++;
    }
    cout << ans;
}

int main() {
    ASSAF;
    int t = 1;
//    cin >> t;
    while (t--) {
        accepted();
//        cout << "\n" ;
    }
    return 0;
}