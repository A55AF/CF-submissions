#include<bits/stdc++.h>

typedef long long ll;
#define vi vector<int>v
#define mpii map<int,int> mp
#define pii pair<int,int> p
# define pb push_back
# define loop(n) for ( int i = 0 ; i < n ; i++ )
#define all(a) a.begin(),a.end()
#define FIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

void in_v(vector<int> &v, int sz) {
    loop(sz) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void out_v(vector<int> &v, int sz) {
    loop(sz)cout << v[i] << " ";
}

int allsum(vector<int> v) {
    int sum = 0;
    loop(v.size()) {
        sum += v[i];
    }
    return sum;
}

void solve() {
//    int n;
//    cin >> n;
//    vi;
//    in_v(v, n);
//    sort(all(v));
//    reverse(all(v));
//    for (int i = 1; i < n; i++) {
//        if (v[0] > v[i])
//            v[0] -= v[i];
//    }
//    cout << v[0] * n;
    int n;
    cin >> n;
    vi;
    in_v(v, n);
    sort(all(v));
    reverse(all(v));
    bool check = true;
    while (check) {
        check = false;
        for (int j = 0; j < n; j++) {
            if (v[0] > v[j])
                v[0] -= v[j], check = true;
        }
        sort(all(v));
        reverse(all(v));
    }
    cout << allsum(v);
}

int main() {
    FIO
    int t = 1;
    //cin >> t ;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}