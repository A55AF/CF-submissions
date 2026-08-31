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

void solve() {
    int n;
    cin >> n;
    int even = 0, odd = 0, odd_indx = 0, even_indx = 0;
    loop(n) {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even++, even_indx = i + 1;
        else
            odd++, odd_indx = i + 1;
    }
    if (odd > even)
        cout << even_indx;
    else if (even > odd)
        cout << odd_indx;
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